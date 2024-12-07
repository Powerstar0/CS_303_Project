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
#include "Book.h"
#include "Date.h"
#include "Employee.h"

Book::Book(const std::string &n) {
    name = n;
    archived = false;
}
