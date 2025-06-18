//array of pointer//
#include <iostream>
using namespace std;
    void fun1()
    {
        int val[3]={5,10,20};
        int*ptr;
        ptr=val; // ptr points to the first element of val
        cout << "elements of the array are:";
        cou  <<ptr[0]<< " " << ptr[1] << " " << ptr[2] << endl;
        cout<<ptr<<"  "<<val"  "<<&val
    } 
    int main() {
        fun1();
        return 0;
    }