#include <iostream>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
    cin.ignore();
    
	while(t--)
	{
	    int state=1;
	    string str;
	    getline(cin,str);
	    int count=0; 
	    for(int i=0;i<str.length();i++)
	    {
	        if(str[i]==' ')
	        {
	                state=1;
	            
	        }
	        
	        else if(str[i]=='\\')
	        {
	            if(i!=str.length()-1)
	            {
	            if(str[i+1]=='t' || str[i+1]=='n')
	            {state=1;
	            i++;
	            }
	            }
	        }
	        
	        else if(state==1)
	        {
	            state=0;
	            //cout<<str[i];
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
