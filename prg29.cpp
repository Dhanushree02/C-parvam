/*include a method named calculatearea() that output a general message like:"area not defined for generic shape"*/
#include <iostream>
using namespace std;
class Shape {
public:
    virtual void calculateArea() {
        cout << "Area not defined for generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void calculateArea() override {
        cout << "Calculating area for Circle" << endl;
    }
};  

class Rectangle : public Shape {
public:
    void calculateArea() override {
        cout << "Calculating area for Rectangle" << endl;
    }
};
class Triangle : public Shape {

public:
    void calculateArea() override {
        cout << "Calculating area for Triangle" << endl;
    }
};  
int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();
    Shape* shape3 = new Triangle();
    
    shape1->calculateArea();
    shape2->calculateArea(); 
    shape3->calculateArea(); 
    
    delete shape1;
    delete shape2;
    delete shape3;

    return 0;
}