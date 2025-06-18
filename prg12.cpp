#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    
    void setValues(float l, float w) {
        length = l;
        width = w;
    }

    
    void displayArea() {
        float area = length * width;
        cout << "Area of the rectangle: " << area << endl;
    }
};

int main() {
    Rectangle rect;

    
    rect.setValues
    return 0;
}