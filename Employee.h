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


#ifndef CS_303_PROJECT_EMPLOYEE_H
#define CS_303_PROJECT_EMPLOYEE_H


class Employee {
public:
    std::string name;
    int waiting_time;
    int retaining_time;
    Employee(const std::string& n);
};


#endif //CS_303_PROJECT_EMPLOYEE_H
