#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string text;
    ifstream MyFile("C://Users//DHANUSHREE//Downloads//Wearable_IoT_Emergency_Alert_Project_Report.pdf//sample.txt");
    while(getline(MyFile, text))
    cout<<text<<endl;
    MyFile.close();
    return 0;
}