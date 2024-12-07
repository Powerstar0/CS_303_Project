//
// Created by Johnny on 12/6/2024.
//

#include "Library.h"
#include <iomanip>

void Library::add_book(const std::string &book_name) {
    books.emplace(book_name, Book(book_name));
}

void Library::add_employee(const std::string &employee_name) {
    employees.emplace(employee_name, Employee(employee_name));
}

void Library::circulate_book(const std::string &book_name, const Date &start_date) {

    auto& book = books.at(book_name);
    book.circulation_start_date = start_date;
    book.archived = false;

    for (auto& [name, employee] : employees) {
        book.employee_queue.push_back(&employee);
    }

    std::cout << "Circulation of book '" << book_name << "' started on " << start_date << ".\n";
}

void Library::pass_on(const std::string &book_name, const Date &current_date) {
    auto& book = books.at(book_name);

    if (book.employee_queue.empty()) {
        std::cerr << "No employees in the queue for book " << book_name << ".\n";
        return;
    }

    Employee* current_employee = book.employee_queue.front();
    book.employee_queue.pop_front();

    // Update retaining time
    current_employee->retaining_time += book.circulation_start_date.daysBetween(current_date);

    if (book.employee_queue.empty()) {
        book.archived = true;
        book.circulation_end_date = current_date;
        std::cout << "Book '" << book_name << "' archived on " << current_date << ".\n";
    } else {
        Employee* next_employee = book.employee_queue.front();
        next_employee->waiting_time += book.circulation_start_date.daysBetween(current_date) + book.previous_time_elapsed;
        std::cout << "Book '" << book_name << "' passed from " << current_employee->name
                  << " to " << next_employee->name << " on " << current_date << ".\n";
        book.previous_time_elapsed += current_employee->retaining_time;
    }

    // Update start date for next circulation
    book.circulation_start_date = current_date;
}

void Library::print_summary(const std::string& book_name) const {
    // Check if the book exists in the library
    auto it = books.find(book_name);
    if (it == books.end()) {
        std::cerr << "Book '" << book_name << "' not found in the library.\n";
        return;
    }

    const Book& book = it->second; // Get the book object

    std::cout << "\nSummary for book: " << book_name << "\n";
    std::cout << "----------------------------------------\n";
    std::cout << "Employee\tRetaining Time\tWaiting Time\n";
    std::cout << "----------------------------------------\n";

    // Print employee statistics for the specified book
    for (const auto& [name, employee] : employees) {
        std::cout << employee.name << "\t\t"
                  << employee.retaining_time << "\t\t"
                  << employee.waiting_time << "\n";
    }

    std::cout << "----------------------------------------\n";
}

void Library::reset_employee_times() {
    for (auto& [name, employee] : employees) {
        employee.retaining_time = 0;
        employee.waiting_time = 0;
    }
}



