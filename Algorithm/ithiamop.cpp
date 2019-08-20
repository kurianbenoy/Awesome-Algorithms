#include<bits/stdc++.h>
using namespace std;

int start(int num) 
{ 
	int count = 0; 
	while (num > 0) { 
		++count; 
		num = (num - 1) & num; 
		cout<<num;
	} 
	return count; 
} 

int main()
{
	int a = start(2017);
	cout<<a;
} 

