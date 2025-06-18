using namespace std;

class person{
    public:
    string name;
    int age;

    void display(){
        cout<<"name:"<<Name<<",Age:"<<age<<endl;
    }
};
int main()
{
    person p;
    p.name="Alice";
    p.age=25;
    p.display();
    return 0;
}