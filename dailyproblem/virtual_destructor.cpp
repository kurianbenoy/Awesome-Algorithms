#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
         virtual ~Person() {
 cout<<"Deleting a person."<<endl;
 }
 };
 class Student : public Person {
 public:
    ~student() {
         cout<<"Deleting a student." << endl;
    }
 } ;
 
 
 int main() {
     Person * p
     new Student();
     delete p;
 }
    
