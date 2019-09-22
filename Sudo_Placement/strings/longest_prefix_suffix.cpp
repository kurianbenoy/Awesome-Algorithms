/* This is a version of KMP algorithm
https://practice.geeksforgeeks.org/problems/longest-prefix-suffix/0

expaination: https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/ 
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size(), j =1, ans;
        string s1, s2;
        bool flag = 0;
        for( int i = n-1; i> 0; i-- ){
            s1 = s.substr(0,i);
            s2 = s.substr(j,n-1);
            j++;
            if( s1 == s2 ){
                ans = s1.size();
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
}
