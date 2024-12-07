//
// Created by Johnny on 12/6/2024.
//
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <unordered_map>
#include <iomanip>
#include <ctime>
#include "Date.h"
#include "Book.h"
#include "Employee.h"

#ifndef CS_303_PROJECT_LIBRARY_H
#define CS_303_PROJECT_LIBRARY_H


class Library {
private:
    std::unordered_map<std::string, Book> books;
    std::unordered_map<std::string, Employee> employees;
public:
    void add_book(const std::string& book_name);
    void add_employee(const std::string& employee_name);
    void circulate_book(const std::string& book_name, const Date& start_date);
    void pass_on(const std::string& book_name, const Date& current_date);
    void print_summary(const std::string& book_name) const;
    void reset_employee_times();
};


#endif //CS_303_PROJECT_LIBRARY_H
