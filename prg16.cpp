/*create a class base with a protected variable.derive a class derived and use the protected variable in a public function*/
#include <iostream>
using namespace std;
class Base {
protected:
    int protectedVar;  
public:
    Base(int value) : protectedVar(value) {}  
};  
class Derived : public Base {

public:
    Derived(int value) : Base(value) {}  
    void showProtectedVar() {  
        cout << "Protected Variable: " << protectedVar << endl;
    }
};  
int main() {
    Derived obj(42);  
    obj.showProtectedVar();  
    return 0;
}   