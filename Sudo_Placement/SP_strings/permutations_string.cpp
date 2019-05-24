#include <bits/stdc++.h>

using namespace std;

void swap(char *x, char *y)  
{  
    char temp;  
    temp = *x;  
    *x = *y;  
    *y = temp;  
}  
  

void permute(char *a, int l, int r)  
{  
    int i;  
    if (l == r)  
        cout<<a<<" ";  
    else
    {  
        for (i = l; i <= r; i++)  
        {  
            swap((a+l), (a+i));  
            permute(a, l+1, r);  
            swap((a+l), (a+i)); //backtrack  
        }  
    }  
}  
int main() {
	int T,len;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    char c[100];
	    cin>>c;
	    len = strlen(c);
	    permute(c,0,len-1);
	    cout<<endl;
	    
	}
	return 0;
}
