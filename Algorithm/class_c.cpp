#include<iostream>
using namespace std;

class item
{
  int no;
  float cost;
public:
  void getdata(int a, float b);

  void putdata(void)
  {
    cout<<"no"<<no<<"\n";
    cout<<"cost"<<cost<<"\n";
  }
};

void item:: getdata(int a, float b) {
  no = a;
  cost = b;
}

int main()
{
  item x;
  cout<<"object x"<<"\n";
  x.getdata(100, 299.95);
  x.putdata();

  item y;
  cout<<"y"<<"\n";
  y.getdata(200, 175.50);
  y.putdata();
  return 0;
}
