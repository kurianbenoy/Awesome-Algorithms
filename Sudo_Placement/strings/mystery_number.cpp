#include<bits/stdc++.h>
using namespace std;

int reverseNum(int x)
{
    string s = to_string(x);
    reverse(s.begin(), s.end());
    stringstream ss(s);
    int rev = 0;
    ss>> rev;
    return rev;
}

bool isMystery(int n)
{
    for(int i=1;i<=n/2;i++)
    {
        int j = reverseNum(i);
        if(i+j == n)
        {
            cout<<i<<" "<<j;
            return true;
        }
    }
    cout << "Not a Mystery Number";
    return false;
}

int main()
{
    int n = 121;
    isMystery(n);
    return 0;
}
