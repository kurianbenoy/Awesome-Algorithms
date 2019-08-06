#include<bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int circularTrail(int n, vector<int> spot) {
    int mlen, a ,b;
    
    mlen = spot.size();
    
    int count[100000];
    for(int i=1;i<=n;i++)
    {
        count[i] = 0;
    }
/* for count can use hashing*/
    for(int i=0;i<mlen-1;i++)
    {
        a = spot[i];
        b = spot[i+1];
        if(a>b)
        {
            for(int i=a;i<=n;i++)
                count[i]++;
            int c= spot[i-1];

            for(int i=1;i<c;i++)
                count[i]++;
        }
        else{
            for(int i=a;i<=b;i++)
            {
                count[i]++;

            }
        }
    }
    int maxr;
    maxr = count[1];
    for(int i=2;i<=n;i++){
        if(maxr<count[i]){
            maxr = count[i];
        }
    }
    cout<<maxr;
    for(int i=0;i<=n;i++)
	cout<<count[i];
    return (spot[maxr]);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string spot_count_temp;
    getline(cin, spot_count_temp);

    int spot_count = stoi(ltrim(rtrim(spot_count_temp)));

    vector<int> spot(spot_count);

    for (int i = 0; i < spot_count; i++) {
        string spot_item_temp;
        getline(cin, spot_item_temp);

        int spot_item = stoi(ltrim(rtrim(spot_item_temp)));

        spot[i] = spot_item;
    }

    int result = circularTrail(n, spot);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
