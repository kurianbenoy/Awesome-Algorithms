#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            s.erase(i-1,2);
            i = 0;
        }
    }
    if(s.length()==0){
        return("Empty String");
    }
    else{
        return(s);
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

