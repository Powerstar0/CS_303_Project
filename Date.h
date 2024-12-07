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

#ifndef CS_303_PROJECT_DATE_H
#define CS_303_PROJECT_DATE_H


class Date {
private:
    int year, month, day;
public:
    Date(int y, int m, int d);
    int daysBetween(const Date& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
};


#endif //CS_303_PROJECT_DATE_H
