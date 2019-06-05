#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);

	cout<<str<<endl;

	str.push_back('s');
	cout<<str<<endl;

	str.push_back('h');
	cout<<str<<endl;

	str.resize(2);
	cout << "The string after resize operation is : "; 
    cout << str << endl; 

	cout << "The capacity of string is : "; 
    cout << str.capacity() << endl;   	
	std::string::iterator it; 
	
	cout << "The string using forward iterators is : "; 
    for (it=str.begin(); it!=str.end(); it++) 
    	cout << *it<<endl; 
	return 0;
}
