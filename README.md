Johnny Diep: CS303 Project 1B 

Honest Disclaimer: This project relied heavily and extensively on ChatGPT and was mostly written using it. 

Assumptions: You can only circulate one book at a time and must reset the employees' times whenever you switch to a different book. 

UML class diagram:Efficiency of algorithms: 

Note: .at, .find, and .emplace methods are O(log N) 

Add_book(const std::string &book_name) 

O(log N) 

Add_employee(const std::string &employee_name) 

O(log N) 

Circulate_book(const std::string &book_name, const Date &start_date) 

O(M + log N) 

Pass_on(const std::string &book_name, const Date &current_date) 

O(log N) 

Print_summary(const std:: string& book_name) 

O(M + log N) 

Reset_employee_times() 

O(N) 

Book(const string& n)  

O(1) 

daysBetween(other_date: Date) 

O(1) 

Employee(const string &n) 

O(1) 

Individual Contribution: 

	Bymyself  

References: 

	ChatGPT 
