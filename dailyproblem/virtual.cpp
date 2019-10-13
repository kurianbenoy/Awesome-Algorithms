#include<iostream>
using namespace std;

#define NAME_SIZE 50

class Person{
    char name[NAME_SIZE];
    int age;
    char gender;
    public:
        virtual void aboutme(){
            cout<<"I am a person";
            }
};

class Student: public Person{
    public:
        void aboutme(){
            cout<<" I am student";
            }
     };

int main()
{
/*    Person *p = new Student();
    cout<<"Prints as I am person";
    //Adding virtual func*/
    Person *p = new Student();
    p->aboutme();
    delete p;
    return 0;
}
