/*Trailing 0s in n! = Count of 5s in prime factors of n!
                  = floor(n/5) + floor(n/25) + floor(n/125) + ....
https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial/0*/

#include<iostream>
using namespace std;



int fivecount(int n)
{
	int count = 0;

	for(int i=5; n / i>=1;i*=5)
		count += n / i;
	return count;
}

int main()
{
	int T;
	cin>>T;
	
	while(T--)
	{
		int n;
		cin>>n;
		cout<<fivecount(n)<<endl;
		}
	return 0;
}
