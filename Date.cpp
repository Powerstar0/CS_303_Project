//
// Created by Johnny on 12/6/2024.
//

#include "Date.h"
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <unordered_map>
#include <iomanip>
#include <ctime>

Date::Date(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

int Date::daysBetween(const Date &other) const {
    struct std::tm thisDate = {0, 0, 0, day, month - 1, year - 1900};
    struct std::tm otherDate = {0, 0, 0, other.day, other.month - 1, other.year - 1900};
    std::time_t thisTime = std::mktime(&thisDate);
    std::time_t otherTime = std::mktime(&otherDate);
    return static_cast<int>(std::difftime(otherTime, thisTime) / (60 * 60 * 24));
}

std::ostream &operator<<(std::ostream &os, const Date &date) {
    os << std::setfill('0') << std::setw(2) << date.month << "/"
       << std::setw(2) << date.day << "/"
       << date.year;
    return os;
}
