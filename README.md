# Programing_Paradigm

This project defines a simple employee management system that allows you to add, delete, search for, and display information about employees. The program is structured as follows:
Employee Class Hierarchy:
The code defines a class hierarchy for employees with a base class Employee and three derived classes: Manager, Engineer, and Clerk.
All employee types have common attributes such as ID, name, and salary, but each derived class adds its own specific attribute: Manager has a "department," Engineer has "experienceYears," and Clerk has "deskNumber."
EmployeeManager Class:
The EmployeeManager class is used to manage a list of employees.
It includes methods for adding employees, deleting employees by their ID, searching for employees by their ID, and displaying the list of employees.
Main Function:
The main function is the entry point of the program.
It initializes an EmployeeManager object and adds a set of predefined employees of different types (Managers, Engineers, and Clerks) to its list using the addEmployee method.
Menu System:
The main part of the program is a menu system that allows the user to perform various operations on the employee list.
The menu offers the following options:
Add Employee: This option allows the user to input details for a new employee (ID, name, salary, and employee type) and add them to the list.
Delete Employee: The user can enter the ID of an employee to remove them from the list.
Search Employee: This option allows the user to find and display information about a specific employee by entering their ID.
Display Employee List: This option displays a list of all employees and their details.
Exit: This option exits the program.
User Input:
The program takes user input for various operations, such as entering employee details, choosing employee types, and entering employee IDs for deletion or searching.
Employee Management:
The code uses polymorphism to handle different employee types, and it calls the appropriate display method for each employee type to print their information.
Dynamic Memory Management:
The program uses dynamic memory allocation (heap) to create and store employee objects. When an employee is deleted, it also frees the allocated memory.
Loops:
The program runs in an infinite loop until the user selects the "Exit" option, allowing the user to perform multiple operations without restarting the program.
Overall, this program is a basic example of a console-based employee management system that demonstrates the use of object-oriented principles, inheritance, polymorphism, and dynamic memory allocation. It's designed to provide basic functionality for managing employees in a fictitious organization.
