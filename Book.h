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
#include "Employee.h"


#ifndef CS_303_PROJECT_BOOK_H
#define CS_303_PROJECT_BOOK_H


class Book {
public:
    std::string name;
    int previous_time_elapsed = 0;
    Date circulation_start_date = Date(0,0,0);
    Date circulation_end_date = Date(0,0,0);
    bool archived;
    std::deque<Employee*> employee_queue;
    std::unordered_map<std::string, int> retaining_times;
    std::unordered_map<std::string, int> waiting_times;
    Book(const std::string& n);

};


#endif //CS_303_PROJECT_BOOK_H
