#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Employee
{
    public:
    Employee(int id, const string& name, double salary) : id(id), name(name), salary(salary)
    {
        
    }
    virtual void display() const
    {
        cout << "ID: " << id << "\nName: " << name << "\nSalary: $" << salary << "\n";
    }
    int getID() const
    {
        return id;
    }
    protected:
    int id;
    string name;
    double salary;
};
class Manager : public Employee 
{
    public:
    Manager(int id, const string& name, double salary, const string& department): Employee(id, name, salary), department(department) 
    {
        
    }
    void display() const override
    {
        Employee::display();
        cout << "Department: " << department << "\n";
    }
    private:
    string department;
};
class Engineer : public Employee
{
    public:
    Engineer(int id, const string& name, double salary, int experienceYears):Employee(id, name, salary), experienceYears(experienceYears)
    {
        
    }
    void display() const override
    {
        Employee::display();
        cout << "Experience Years: " << experienceYears << " years\n";
    }
    private:
    int experienceYears;
};
class Clerk : public Employee
{
    public:
    Clerk(int id, const string& name, double salary, int deskNumber): Employee(id, name, salary), deskNumber(deskNumber)
    {
        
    }
    void display() const override
    {
        Employee::display();
        cout << "Desk Number: " << deskNumber << "\n";
    }
    private:
    int deskNumber;
};
class EmployeeManager 
{
    public:
    void addEmployee(Employee* employee, int i)
    {
        employees.push_back(employee);
        if(i==1)
        {
            cout << "Employee added: ID " << employee->getID() << endl;
        }
    }
    void deleteEmployee(int id)
    {
        for (auto it = employees.begin(); it != employees.end(); ++it)
        {
            if ((*it)->getID() == id)
            {
                cout << "Employee deleted: ID " << id << endl;
                delete *it;
                employees.erase(it);
                return;
            }
        }
        cout << "Employee not found: ID " << id << endl;
    }
    void searchEmployee(int id)
    {
        for (const Employee* employee : employees) 
        {
            if (employee->getID() == id) 
            {
                cout << "Employee found:\n";
                employee->display();
                return;
            }
        }
        cout << "Employee not found: ID " << id << endl;
    }
    void displayEmployeeList()
    {
        cout << "Employee List:\n\n";
        for (const Employee* employee : employees) {
            employee->display();
            cout << "------------\n\n";
        }
    }
    private:
    vector<Employee*> employees;
};
int main()
{
    EmployeeManager employeeManager;
    employeeManager.addEmployee(new Manager(1, "Mohd Hamza Abbasi", 1300, "Software"),0);
    employeeManager.addEmployee(new Manager(2, "Emma Johnson", 1400, "Product"),0);
    employeeManager.addEmployee(new Manager(3, "David Smith", 1500, "Sale"),0);
    employeeManager.addEmployee(new Manager(4, "Olivia Brown", 1350, "Accounts"),0);
    employeeManager.addEmployee(new Manager(5, "Liam Wilson", 1320, "Product"),0);
    employeeManager.addEmployee(new Manager(6, "Sophia Lee", 1600, "Sale"),0);
    employeeManager.addEmployee(new Manager(7, "James Davis", 1550, "Software"),0);
    employeeManager.addEmployee(new Manager(8, "Charlotte Evans", 1375, "Accounts"),0);
    employeeManager.addEmployee(new Manager(9, "Noah Clark", 1280, "Product"),0);
    employeeManager.addEmployee(new Manager(10, "Oliver White", 1450, "Sale"),0);
    employeeManager.addEmployee(new Manager(11, "Ava Hall", 1300, "Software"),0);
    employeeManager.addEmployee(new Manager(12, "Isabella King", 1380, "Accounts"),0);
    employeeManager.addEmployee(new Manager(13, "Sophia Adams", 1600, "Product"),0);
    employeeManager.addEmployee(new Manager(14, "Mia Lewis", 1320, "Sale"),0);
    employeeManager.addEmployee(new Manager(15, "Amelia Scott", 1350, "Software"),0);
    employeeManager.addEmployee(new Manager(16, "Harper Baker", 1400, "Accounts"),0);
    employeeManager.addEmployee(new Manager(17, "William Turner", 1450, "Product"),0);
    employeeManager.addEmployee(new Manager(18, "Sophia Mitchell", 1520, "Sale"),0);
    employeeManager.addEmployee(new Manager(19, "Ethan Scott", 1380, "Software"),0);
    employeeManager.addEmployee(new Manager(20, "Ava Johnson", 1420, "Accounts"),0);
    employeeManager.addEmployee(new Manager(21, "Liam Adams", 1475, "Product"),0);
    employeeManager.addEmployee(new Manager(22, "Olivia Lee", 1310, "Sale"),0);
    employeeManager.addEmployee(new Manager(23, "Noah White", 1400, "Software"),0);
    employeeManager.addEmployee(new Manager(24, "Emma Davis", 1570, "Accounts"),0);
    employeeManager.addEmployee(new Engineer(1590, "Amelia Hall", 1137, 3),0);
	employeeManager.addEmployee(new Engineer(2378, "Ethan Lewis", 1345, 5),0);
	employeeManager.addEmployee(new Engineer(1894, "Olivia Parker", 2210, 2),0);
	employeeManager.addEmployee(new Engineer(4172, "Liam Garcia", 1521, 9),0);
	employeeManager.addEmployee(new Engineer(3285, "Ava Wright", 1836, 7),0);
	employeeManager.addEmployee(new Engineer(2941, "Mason Brown", 1249, 4),0);
	employeeManager.addEmployee(new Engineer(5732, "Sophia Evans", 2198, 6),0);
	employeeManager.addEmployee(new Engineer(4807, "Noah Johnson", 1324, 1),0);
	employeeManager.addEmployee(new Engineer(8456, "Isabella Clark", 2046, 8),0);
	employeeManager.addEmployee(new Engineer(6321, "Logan Miller", 1401, 10),0);
	employeeManager.addEmployee(new Engineer(7198, "Emma Harris", 1582, 3),0);
	employeeManager.addEmployee(new Engineer(1098, "William Wilson", 1147, 5),0);
	employeeManager.addEmployee(new Engineer(8250, "Oliver Martinez", 1496, 2),0);
	employeeManager.addEmployee(new Engineer(5287, "Mia Lee", 2089, 9),0);
	employeeManager.addEmployee(new Engineer(3674, "Elijah Taylor", 1365, 7),0);
	employeeManager.addEmployee(new Engineer(2938, "Aria Anderson", 1812, 4),0);
	employeeManager.addEmployee(new Engineer(4310, "Benjamin Moore", 1526, 6),0);
	employeeManager.addEmployee(new Engineer(7745, "Grace Jackson", 1179, 1),0);
	employeeManager.addEmployee(new Engineer(6932, "Lucas Thompson", 1298, 8),0);
	employeeManager.addEmployee(new Engineer(5841, "Lily Harris", 2215, 10),0);
	employeeManager.addEmployee(new Engineer(8623, "Henry King", 1946, 3),0);
	employeeManager.addEmployee(new Engineer(1765, "Chloe Adams", 1057, 5),0);
	employeeManager.addEmployee(new Engineer(2489, "Alexander Scott", 2326, 2),0);
	employeeManager.addEmployee(new Engineer(3690, "Ella Green", 1452, 9),0);
	employeeManager.addEmployee(new Engineer(7589, "James Murphy", 2187, 7),0);
	employeeManager.addEmployee(new Engineer(6923, "Avery Turner", 1496, 4),0);
	employeeManager.addEmployee(new Engineer(5236, "Harper Hall", 1367, 6),0);
	employeeManager.addEmployee(new Engineer(1390, "Jack Rodriguez", 1195, 1),0);
	employeeManager.addEmployee(new Engineer(9657, "Sofia White", 1952, 8),0);
	employeeManager.addEmployee(new Engineer(4123, "Daniel Hernandez", 1221, 10),0);
	employeeManager.addEmployee(new Engineer(6078, "Aubrey Baker", 1364, 3),0);
	employeeManager.addEmployee(new Engineer(7981, "Emma Collins", 1243, 5),0);
	employeeManager.addEmployee(new Engineer(2874, "Logan Garcia", 1938, 2),0);
	employeeManager.addEmployee(new Engineer(6429, "Olivia Davis", 1554, 9),0);
	employeeManager.addEmployee(new Engineer(5246, "William Parker", 1211, 7),0);
	employeeManager.addEmployee(new Engineer(3176, "Sophia Adams", 1725, 4),0);
	employeeManager.addEmployee(new Engineer(9274, "Mason Clark", 1110, 6),0);
	employeeManager.addEmployee(new Engineer(8712, "Ava Martinez", 1335, 1),0);
	employeeManager.addEmployee(new Engineer(3652, "Liam Hall", 1682, 8),0);
	employeeManager.addEmployee(new Engineer(4962, "Noah Taylor", 1987, 10),0);
	employeeManager.addEmployee(new Engineer(6732, "Isabella Scott", 1336, 3),0);
	employeeManager.addEmployee(new Engineer(8147, "Ethan Wilson", 1493, 5),0);
	employeeManager.addEmployee(new Engineer(2365, "Lily Wright", 1796, 2),0);
	employeeManager.addEmployee(new Engineer(6821, "Oliver Turner", 1278, 9),0);
	employeeManager.addEmployee(new Engineer(5391, "Chloe Miller", 2320, 7),0);
	employeeManager.addEmployee(new Engineer(4826, "Aria Smith", 1534, 4),0);
	employeeManager.addEmployee(new Engineer(2156, "Ella Johnson", 1672, 2),0);
	employeeManager.addEmployee(new Engineer(1873, "Michael Davis", 1234, 8),0);
	employeeManager.addEmployee(new Engineer(2234, "Sophie Anderson", 1447, 6),0);
	employeeManager.addEmployee(new Engineer(1910, "Jackson White", 2111, 4),0);
    employeeManager.addEmployee(new Clerk(101, "Ava King", 1200, 1),0);
    employeeManager.addEmployee(new Clerk(102, "Charlotte Adams", 1150, 2),0);
    employeeManager.addEmployee(new Clerk(103, "William Brown", 1250, 3),0);
    employeeManager.addEmployee(new Clerk(104, "Olivia Taylor", 1180, 4),0);
    employeeManager.addEmployee(new Clerk(105, "Ethan Moore", 1120, 5),0);
    employeeManager.addEmployee(new Clerk(106, "Sophia Turner", 1210, 6),0);
    employeeManager.addEmployee(new Clerk(107, "Noah Mitchell", 1100, 7),0);
    employeeManager.addEmployee(new Clerk(108, "Isabella Lewis", 1270, 8),0);
    employeeManager.addEmployee(new Clerk(109, "Ella Davis", 1320, 9),0);
    employeeManager.addEmployee(new Clerk(110, "Mason Johnson", 1130, 1),0);
    employeeManager.addEmployee(new Clerk(111, "Aria Smith", 1280, 2),0);
    employeeManager.addEmployee(new Clerk(112, "Liam Wilson", 1155, 3),0);
    employeeManager.addEmployee(new Clerk(113, "Chloe Martin", 1215, 4),0);
    employeeManager.addEmployee(new Clerk(114, "Jack Wright", 1265, 5),0);
    employeeManager.addEmployee(new Clerk(115, "Lily Davis", 1160, 6),0);
    employeeManager.addEmployee(new Clerk(116, "Michael Clark", 1240, 7),0);
    employeeManager.addEmployee(new Clerk(117, "Grace Garcia", 1190, 8),0);
    employeeManager.addEmployee(new Clerk(118, "Benjamin Harris", 1235, 9),0);
    employeeManager.addEmployee(new Clerk(119, "Sofia Anderson", 1295, 1),0);
    employeeManager.addEmployee(new Clerk(120, "Henry Brown", 1125, 2),0);
    employeeManager.addEmployee(new Clerk(121, "Oliver Thompson", 1260, 3),0);
    employeeManager.addEmployee(new Clerk(122, "Aubrey Miller", 1175, 4),0);
    employeeManager.addEmployee(new Clerk(123, "Emma Wilson", 1305, 5),0);
    employeeManager.addEmployee(new Clerk(124, "Logan Jackson", 1210, 6),0);
    employeeManager.addEmployee(new Clerk(125, "Noah Turner", 1185, 7),0);
    employeeManager.addEmployee(new Clerk(126, "Sophia White", 1275, 8),0);
    employeeManager.addEmployee(new Clerk(127, "Ethan Martin", 1135, 9),0);
    employeeManager.addEmployee(new Clerk(128, "Chloe Wilson", 1250, 1),0);
    employeeManager.addEmployee(new Clerk(129, "William Taylor", 1150, 2),0);
    employeeManager.addEmployee(new Clerk(130, "Ava Lewis", 1290, 3),0);
    employeeManager.addEmployee(new Clerk(131, "Mia Scott", 1225, 4),0);
    employeeManager.addEmployee(new Clerk(132, "Liam Hall", 1195, 5),0);
    employeeManager.addEmployee(new Clerk(133, "Ella Garcia", 1265, 6),0);
    employeeManager.addEmployee(new Clerk(134, "James Davis", 1280, 7),0);
    employeeManager.addEmployee(new Clerk(135, "Sofia Rodriguez", 1160, 8),0);
    employeeManager.addEmployee(new Clerk(136, "Daniel Turner", 1210, 9),0);
    employeeManager.addEmployee(new Clerk(137, "Avery Baker", 1220, 1),0);
    employeeManager.addEmployee(new Clerk(138, "Olivia Martinez", 1190, 2),0);
    employeeManager.addEmployee(new Clerk(139, "Ethan Adams", 1245, 3),0);
    employeeManager.addEmployee(new Clerk(140, "Charlotte Clark", 1255, 4),0);
    employeeManager.addEmployee(new Clerk(141, "Jackson Lee", 1205, 5),0);
    employeeManager.addEmployee(new Clerk(142, "Isabella Smith", 1170, 6),0);
    employeeManager.addEmployee(new Clerk(143, "Noah Mitchell", 1300, 7),0);
    employeeManager.addEmployee(new Clerk(144, "Mason Turner", 1290, 8),0);
    employeeManager.addEmployee(new Clerk(145, "Sophie Taylor", 1180, 9),0);
    employeeManager.addEmployee(new Clerk(146, "Ella Garcia", 1225, 1),0);
    employeeManager.addEmployee(new Clerk(147, "William Harris", 1165, 2),0);
    employeeManager.addEmployee(new Clerk(148, "Liam Martin", 1265, 3),0);
    employeeManager.addEmployee(new Clerk(149, "Ava King", 1250, 4),0);
    employeeManager.addEmployee(new Clerk(150, "Chloe Turner", 1275, 5),0);
    employeeManager.addEmployee(new Clerk(151, "Ethan Wright", 1195, 6),0);
    employeeManager.addEmployee(new Clerk(152, "Grace Anderson", 1240, 7),0);
    employeeManager.addEmployee(new Clerk(153, "Jack Baker", 1230, 8),0);
    employeeManager.addEmployee(new Clerk(154, "Olivia Mitchell", 1200, 9),0);
    employeeManager.addEmployee(new Clerk(155, "Sophia Davis", 1285, 1),0);
    employeeManager.addEmployee(new Clerk(156, "Lily Martinez", 1255, 2),0);
    employeeManager.addEmployee(new Clerk(157, "Noah Thompson", 1215, 3),0);
    employeeManager.addEmployee(new Clerk(158, "Aria King", 1155, 4),0);
    employeeManager.addEmployee(new Clerk(159, "Henry Scott", 1235, 5),0);
    employeeManager.addEmployee(new Clerk(160, "Mason Turner", 1270, 6),0);
    employeeManager.addEmployee(new Clerk(161, "Emma Adams", 1165, 7),0);
    employeeManager.addEmployee(new Clerk(162, "William Moore", 1180, 8),0);
    employeeManager.addEmployee(new Clerk(163, "Ella Harris", 1260, 9),0);
    employeeManager.addEmployee(new Clerk(164, "Benjamin Turner", 1285, 1),0);
    employeeManager.addEmployee(new Clerk(165, "Ava Davis", 1220, 2),0);
    employeeManager.addEmployee(new Clerk(166, "Oliver Baker", 1230, 3),0);
    employeeManager.addEmployee(new Clerk(167, "Sophie Wilson", 1275, 4),0);
    employeeManager.addEmployee(new Clerk(168, "Chloe Clark", 1200, 5),0);
    employeeManager.addEmployee(new Clerk(169, "Liam Taylor", 1185, 6),0);
    employeeManager.addEmployee(new Clerk(170, "Noah Hall", 1245, 7),0);
    employeeManager.addEmployee(new Clerk(171, "Sophia Wright", 1290, 8),0);
    employeeManager.addEmployee(new Clerk(172, "Lily Lewis", 1210, 9),0);
    employeeManager.addEmployee(new Clerk(173, "Jack King", 1150, 1),0);
    employeeManager.addEmployee(new Clerk(174, "Ethan Adams", 1320, 2),0);
    employeeManager.addEmployee(new Clerk(175, "Aria Lewis", 1120, 3),0);
    employeeManager.addEmployee(new Clerk(176, "Olivia Scott", 1280, 4),0);
    employeeManager.addEmployee(new Clerk(177, "William Turner", 1180, 5),0);
    employeeManager.addEmployee(new Clerk(178, "Chloe Baker", 1215, 6),0);
    employeeManager.addEmployee(new Clerk(179, "Mason Wilson", 1100, 7),0);
    employeeManager.addEmployee(new Clerk(180, "Ava Taylor", 1270, 8),0);
    while (true)
    {
        cout << "Employee Management System Menu:\n\n";
        cout << "1. Add Employee\n2. Delete Employee\n3. Search Employee\n4. Display Employee List\n5. Exit\n\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
            case 1: 
            {
                int id;
                string name;
                double salary;
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter salary: ";
                cin >> salary;
                int employeeType;
                cout << "Select employee type (1 - Manager, 2 - Engineer, 3 - Clerk): ";
                cin >> employeeType;
                Employee* newEmployee = nullptr;
                switch (employeeType)
                {
                    case 1:
                    {
                        string department;
                        cout << "Enter department: ";
                        cin.ignore();
                        getline(cin, department);
                        newEmployee = new Manager(id, name, salary, department);
                        break;
                    }
                    case 2:
                    {
                        int experienceYears;
                        cout << "Enter experience years: ";
                        cin >> experienceYears;
                        newEmployee = new Engineer(id, name, salary, experienceYears);
                        break;
                    }
                    case 3:
                    {
                        int deskNumber;
                        cout << "Enter desk number: ";
                        cin >> deskNumber;
                        newEmployee = new Clerk(id, name, salary, deskNumber);
                        break;
                    }
                    default:
                    {
                        cout << "Invalid employee type." << endl;
                        break;
                    }
                }
                if(newEmployee)
                {
                    employeeManager.addEmployee(newEmployee,1);
                }
                break;
            }
            case 2:
            {
                int id;
                cout << "Enter ID of the employee to delete: ";
                cin >> id;
                employeeManager.deleteEmployee(id);
                break;
            }
            case 3:
            {
                int id;
                cout << "Enter ID of the employee to search: ";
                cin >> id;
                employeeManager.searchEmployee(id);
                break;
            }
            case 4:
            {
                employeeManager.displayEmployeeList();
                break;
            }
            case 5:
            {
                return 0;
            }
            default:
            {
                cout << "Invalid choice. Please try again." << endl;
            }
            
        }
    }
}

