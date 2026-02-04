#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //list<int> l(10,5);
    // for(auto it = l.begin();it!=l.end();it++)
    // {
    //     cout<<*l.begin()<<endl;
    // }
    // for(int val : l)
    // {
    //     cout<<val<<endl;
    // }
    //list<int> l ={1,2,3,4,5};
    //list<int> l2(l);
    //int a[]={10,20,30};
    //list<int> l2(a,a+3);
    vector<int> v={10,20,30};
    list<int>l2(v.begin(),v.end());
    //l2.clear();
    cout<<l2.size()<<endl;
    l2.resize(5,100);
    if(l2.empty())
    {
        cout<<"Empty";
    }
    for(int val:l2)
    {
        cout<<val<<endl;
    }
    return 0;
}