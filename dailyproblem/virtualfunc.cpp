 #include<bits/stdc++.h>
 using namespace std;
#define NAME_SIZE 50 
 class Person {
     int id;// all members are private by default
     char name[NAME_SIZE];
     public:
         virtual void aboutMe() {
          cout << "I am a person." << endl;
      }
         virtual bool addCourse(string s) = 0;
     };
 
 
 class Student : public Person {
     public:
         void aboutMe() {
             cout << "I am a student." << endl;
             }
         bool addCourse(string s) {
             cout << "Added course " << s << "to student." << endl;
             return true;
         }
 };

 int main() {

    Person * p = new Student();
     p->aboutMe(); // prints "I am a student."
     p->addCourse("History");
     p->addCourse("Kaggle");
     delete p;
 }

