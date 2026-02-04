#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int> v={1,2,3,4,5,2};
    vector<int> v2={100,100,100};
    // vector<int> v2;
    // v2=v;
    // v.pop_back();
    // v.pop_back();
    //v.insert(v.begin()+2,v2.begin(),v2.end());
    // v.erase(v.begin()+1,v.begin()+4);
    //replace(v.begin(),v.end()-1,2,100);
    // auto it = find(v.begin(),v.end(),5);
    // cout<<*it<<endl;
    // if(it==v.end())
    // {
    //     cout<<"Not found";
    // }
    // else
    // {
    //     cout<<"Found";
    // }
    // cout<<v[3]<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.front()<<endl;
    for(auto it =v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}