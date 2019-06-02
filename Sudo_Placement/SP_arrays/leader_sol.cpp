#include <bits/stdc++.h>
using namespace std;

long long a[10000000];
vector<long long>v;

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
    
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }

        long long max = a[n-1];

        for(long long i =n-1;i>=0;i--){
            if(a[i] >= max){

                max = a[i];

                v.push_back(max);

            }
        }
        reverse(v.begin(), v.end());
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        v.clear();
        cout << endl;

   }
}
