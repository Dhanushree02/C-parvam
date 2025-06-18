/*create a class employee and make three objects.store and display the data for three different employee using each object*/
#include <iostream>
using namespace std;
class Employee {
public:
    string name;
    int id;
    float salary;

    void setData(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee emp1, emp2, emp3;

    emp1.setData("Alice", 101, 50000);
    emp2.setData("Bob", 102, 60000);
    emp3.setData("Charlie", 103, 70000);

    cout << "Employee 1: ";
    emp1.display();
    cout << "Employee 2: ";
    emp2.display();
    cout << "Employee 3: ";
    emp3.display();

    return 0;
}