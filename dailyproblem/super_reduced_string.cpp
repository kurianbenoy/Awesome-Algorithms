#include<bits/stdc++.h>
using namespace std;

int reduceString(string s)
{
    int count =1, steps = 0;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1])
            count +=1;
        else{
            steps += count/2;
            count = 1;
            }
       }
       steps += count/2;
       return steps;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = reduceString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
