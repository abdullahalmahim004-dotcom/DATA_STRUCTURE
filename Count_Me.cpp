#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    cin.ignore(); 
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        map<string,int>mp;
        int mx = 0;
        string mx_word;
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word] > mx)
            {
                mx = mp[word];
                mx_word = word;
            }
        }
        cout << mx_word << " " << mx << endl;
    }
    return 0;
}
