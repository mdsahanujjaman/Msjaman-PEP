#include <iostream>
#include <string>

class Employees {
public:
    std::string name;
    std::string id;
    std::string department;
    std::string joiningYear;
    std::string salary;

    // Default Constructor
    Employees() {
        name = "NIL";
        id = "N/A";
        department = "N/A";
        joiningYear = "N/A";
        salary = "N/A";
    }

    // Parameterized Constructor (3 args)
    Employees(std::string name, std::string id, std::string department) {
        this->name = name;
        this->id = id;
        this->department = department;
        this->joiningYear = "N/A";
        this->salary = "N/A";
    }

    // Parameterized Constructor (5 args)
    Employees(std::string name, std::string id, std::string department, std::string joiningYear, std::string salary) {
        this->name = name;
        this->id = id;
        this->department = department;
        this->joiningYear = joiningYear;
        this->salary = salary;
    }

    void displayInfo() {
        std::cout << name << " " << id << " " << department << " " << joiningYear << " " << salary << std::endl;
    }
};

int main() {
    Employees emp1;
    Employees emp2("Jeet", "223YG", "Engineering");
    Employees emp3("Shaon", "224AB", "IT", "2023", "47017");

    emp1.displayInfo();
    emp2.displayInfo();
    emp3.displayInfo();

    return 0;
}
