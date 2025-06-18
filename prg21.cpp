/*create a class circle with a private radius and a public function to set the radius and display the area of the circle*/
#include <iostream>
using namespace std;
class Circle {
private:
    float radius;   
public:
    void setRadius(float r) {
        radius = r;  
    }

    void displayArea() {
        float area = 3.14 * radius * radius;  
        cout << "Area of the circle: " << area << endl;
    }
};  
int main() {
    Circle circle;  
    circle.setRadius(5.0);  
    circle.displayArea();  
    return 0; 
}