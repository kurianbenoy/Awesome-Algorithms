#include<bits/stdc++.h>
using namespace std;

class Mystack
{
	private: int arr[1000];
			 int top;
	public: 
		Mystack(){top = -1;}
		int pop();
		void push(int );
};

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		Mystack *sq = new Mystack();
		int Q;
		cin>>Q;
		while(Q--)
		{
			int Querytype = 0;
			cin>>Querytype;
			if(Querytype==1)
			{
				int a;
				cin>>a;
				sq->push(a);
			}
			else if(Querytype==2){
				cout<<sq->pop()<<" ";
			}
		}
		cout<<endl;
		}
	}



void Mystack :: push(int x)
{
        // Your Code
        arr[++top] = x;
}
/*The method pop which return the element 
  poped out of the stack*/
int Mystack :: pop()
{
        // Your Code 
        if(top ==-1)
            return -1;
        else
            return arr[top--];
}
