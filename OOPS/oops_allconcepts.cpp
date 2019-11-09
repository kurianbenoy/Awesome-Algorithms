#include<iostream>
using namespace std;

class A{
public:
    static int x;

    A(){

    }
    ~A(){
    }

    void *operator new(size_t sz){
        x++;
    }

/*    void* operator delete(size_t sz){
        x--;
    }*/
};

int A::x = 0;

int main()
{
    A a, b;
    A c, d, e;

    A *ptr = new A;
    A *ptr2 = new A;

    delete ptr;

    cout<<A::x<<endl;
 }
