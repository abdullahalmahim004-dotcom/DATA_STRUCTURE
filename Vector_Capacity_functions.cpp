#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int> v;
    // cout<<v.capact37()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    //  v.push_back(10);
    // cout<<v.capacity()<<endl;
    //  v.push_back(10);
    // cout<<v.capacity()<<endl;
    //  v.push_back(10);
    // cout<<v.capacity()<<endl;
    //  v.push_back(10);
    // cout<<v.capacity()<<endl;
    //  v.push_back(10);
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // cout<< v.size()<<endl;
    // v.clear();
    // cout<<v.size()<<endl;
    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    v.resize(2);
    v.resize(4);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<< " ";
    }
    return 0;
}