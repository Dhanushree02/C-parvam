// Program to swap two numbers using pointers without using a temporary variable//
#include<iostream>
using namespace std;
int main()  
{
int a=20,b=10,*p1=&a,*p2=&b;
cout<<"before swap:*p1="<<*p1<<", *p2="<<*p2<<endl;
*p1=*p1+*p2; 
*p2=*p1-*p2; 
*p1=*p1-*p2; 
cout<<"after swap:*p1="<<*p1<<", *p2="<<*p2<<endl;
return 0;
}