
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // No-argument constructor
    Date() {
        day = 0;
        month = 0;
        year = 0;
    }

    // Parameterized constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Display function
    void display() {
        cout << day << "/" << month << "/" << year;
    }
};

class Employee {
private:
    int id;
    string name;
    Date dob;

public:
    // Default constructor
    Employee() {
        id = 0;
        name = "";
    }

    // Parameterized constructor
    Employee(int empId, string empName, Date empDob) {
        id = empId;
        name = empName;
        dob = empDob;
    }

    // Accept function to accept information
    void accept() {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter employee date of birth (dd mm yyyy): ";
        int d, m, y;
        cin >> d >> m >> y;
        dob = Date(d, m, y);
    }

    // Display function to display employee information
    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Date of Birth: ";
        dob.display();
        cout << endl;
    }
};

int main() {
    Employee emp1; // Creating an object of the Employee class using the default constructor
    emp1.accept(); // Accepting information for emp1
    emp1.display(); // Displaying emp1 information
    Employee emp2(123, "XYZ", Date(1, 1, 1990)); // Creating an object of the Employee class using the parameterized constructor
    emp2.display(); // Displaying emp2 information

    return 0;
}