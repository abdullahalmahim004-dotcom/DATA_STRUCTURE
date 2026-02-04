#include<bits/stdc++.h>
using namespace std;
int main ()
{
    map<string,int>mp;
    mp["Tamim"]=2;
    //mp.insert()
    mp["ramim"]=2;
    mp["Samim"]=2;
    // for(auto it = mp.begin();it!=mp.end();it++)
    // {
    //     cout<< it->first<<" "<<it->second<<endl;
    // }
    if(mp.count("hamim"))
    {
        cout<<"ache";
    }
    else
    {
        cout<<"nai";
    }
    return 0;
}