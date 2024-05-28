#include <iostream>
using namespace std;


class Employee {
private:
    int employeeId;
    string name;
    double salary;
    string department;

public:
 
    int getEmployeeId() const;
    void setEmployeeId(int newEmployeeId);

    string getName() const;
    void setName(string newName);

    double getSalary() const;
    void setSalary(double newSalary);

    string getDepartment() const;
    void setDepartment(string newDepartment);
};

int Employee::getEmployeeId() const {
    return employeeId;
}

void Employee::setEmployeeId(int newEmployeeId) {
    employeeId = newEmployeeId;
}

string Employee::getName() const {
    return name;
}

void Employee::setName(string newName) {
    name = newName;
}


double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double newSalary) {
    salary = newSalary;
}

string Employee::getDepartment() const {
    return department;
}

void Employee::setDepartment(string newDepartment) {
    department = newDepartment;
}

int main() {

  Employee employee1;
  employee1.setName("jack");

  cout << employee1.getName() << endl;
 

}
