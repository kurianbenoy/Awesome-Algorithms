//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
void checkString(string s);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    checkString(s);
	   
	}
	return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
void checkString(string s)
{
    int v=0;
    int c=0;
    int i;
    i = 0; // Assign i a value to start with
    int n = s.length();
    //Your code here
    //while(s[i]!='\0') // this is c++ string, which is not required to be null terminated
    // https://stackoverflow.com/questions/2037209/what-is-a-null-terminated-string
    
    while(i < n)
    {
        if(s[i] == ' ')
        {
            i++;
          // Check for spaces also, as string input has space too in between characters
          continue;  
        }
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
           {
               // You should have checked for only lowercase characters , as in the question statement it's clearly mentioned 
               // <- that string will have only lowecase characters, but still it's not wrong but it will 
               // make more comparisons check.
             v++;
             i++;
           }
        else
        {
            c++;
            i++;
        }
    }
    
    if(v>c)
    cout<<"Yes";
    else if(c>v)
    cout<<"No";
    else
    cout<<"Same";
    
    cout<<endl;
}
