#include <iostream>
#include "Library.h"
#include <iomanip>

int main() {
    Library library;

    // Add books
    library.add_book("Chemistry");

    // Add employees
    library.add_employee("Adam");
    library.add_employee("Sam");
    library.add_employee("Ann");


    // Circulate books
    library.circulate_book("Chemistry", Date(2015, 3, 1));

    // Pass books between employees
    library.pass_on("Chemistry", Date(2015, 3, 5));
    library.pass_on("Chemistry", Date(2015, 3, 7));
    library.pass_on("Chemistry", Date(2015, 3, 15));

    library.print_summary("Chemistry");
    library.reset_employee_times();

    library.add_book("Software Engineering");
    library.circulate_book("Software Engineering", Date(2015, 4, 1));

    library.pass_on("Software Engineering", Date(2015, 4, 5));
    library.pass_on("Software Engineering", Date(2015, 4, 10));
    library.pass_on("Software Engineering", Date(2015, 4, 15));

    // Print summary
    library.print_summary("Software Engineering");


    return 0;
}
