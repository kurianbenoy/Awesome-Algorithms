#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Fork";
    string s3 = "CPP";
    
    s1.append(s3);
    
    for(int i = 0; i < s1.length()/2; i++)
     swap(s1[i] , s1[s1.length() - 1 - i]);
    
    cout << s1[s1.length()/2]<<endl;
    string sta1 = "Fork CPP";
    string sta2 = "Online course";
    
    sta1.append(sta2.substr(6, 7));
    cout << sta1;
    
    string st1 = "Geeks";
    string st2 = "eeGesk";

    int res = 0, i;
    for(i = 0; i < st1.length(); i++)
        res ^= st1[i];

    for(i = 0; i < st2.length(); i++)
        res ^= st2[i];

    cout << (char)res;

    return 0;


} 
