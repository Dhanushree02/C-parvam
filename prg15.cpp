/*create a class calculator with a function add() declared inside the class and defined using scope resolution operator (::) outside the class */
#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b); 
};


int Calculator::add(int a, int b) {
    return a + b; 
}
int main() {
    Calculator calc; 
    int result = calc.add(5, 10); 
    cout << "The sum is: " << result << endl; 
    return 0;
}
