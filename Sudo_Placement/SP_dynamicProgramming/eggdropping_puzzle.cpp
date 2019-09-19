#include <iostream>
#include<limits.h>
using namespace std;

int max(int a, int b) {
    return (a>b)?a:b;
}

int eggdrop(int n, int k)
{
    int eggFloor[n+1][k+1]; 
    int res; 
    int i, j, x; 
  
    for(i=1;i<=n; i++)
    {
        eggFloor[i][1] = 1;
        eggFloor[i][0] = 0;
    }
    
    for(j=1;j<=k; j++)
        eggFloor[1][j] = j;
        
    for(i=2;i<=n; i++)
    {
        for(j=2; j<=k; j++)
        {
            eggFloor[i][j] = INT_MAX; 
            for (x = 1; x <= j; x++) 
            { 
                res = 1 + max(eggFloor[i-1][x-1], eggFloor[i][j-x]); 
                if (res < eggFloor[i][j]) 
                    eggFloor[i][j] = res; 
            } 
        }
    }
    return eggFloor[n][k]; 
    
}

int main() {
	//code
	int T;
	int n, k;
	cin>>T;
	while(T--)
	{
	    cin>>n>>k;
	    int ans;
	    ans = eggdrop(n, k);
	    cout<<ans<<endl;
	}
	return 0;
}
