#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main()
{
   stack<string, vector<string> > str_stack;
      string quote[3] ={"A","B","C" };

	     for (int i =0; i < 3; ++i)
		       str_stack.push(quote[i]);
			         
					    while (!str_stack.empty()) {
						      cout << str_stack.top();
							        str_stack.pop();
									   }

		int count[100000];
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			count[i] = 0;
		}
		
		for(auto a: count)
		{
		cout<<a<<endl;
		}
		return 0;
		}


