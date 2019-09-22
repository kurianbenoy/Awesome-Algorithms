#include<string>
#include<bits/stdc++.h>
#include "algorithm"
using namespace std;

vector<int> stocks(int *arr, int n)
{
    vector<int> profits;
    int buy_day = 0,sell_day = -1, i=1;

    arr[n] = arr[n-1];
    while(i<=n)
    {
        if(arr[i]<= arr[buy_day])
        {
            buy_day = i++;
        }
        else if(arr[i] >= arr[sell_day] || sell_day == -1)
        {
            sell_day = i++;
        }
        if(buy_day > sell_day && sell_day >0)
        {
            sell_day = -1;
        }

        else if ( arr[buy_day] < arr[sell_day] && (arr[i] < arr[sell_day] || i==n)) // maximum profit condition reached
       {
           profits.push_back(buy_day);
           profits.push_back(sell_day);
           buy_day = i++; // reset new buying day as the next day after you have sold the stocks
           sell_day = -1; // selling day not known yet
       }
    }

    return profits;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,*arr;
        cin >> n;
            
        arr = new int[n+1];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        vector<int> results = stocks(arr,n);
        
        if(results.empty())
        cout << "No Profit";
        else
        for (int i = 0; i < results.size()-1; i+=2) {
            cout << "(" <<  results[i] << " " << results[i+1] << ")" << " ";
        }
        
        cout << endl;
     
    }
    

    return 0;
}
