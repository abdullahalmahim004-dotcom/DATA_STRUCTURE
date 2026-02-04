#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int> l={20,30,40,50,60,70,20,10,30,70};
    //l.remove(10);
    //l.sort();
    //l.sort(greater<int>());
    //l.unique();
    l.reverse();
    for(int val:l)
    {
        cout<<val<<endl;
    }
    return 0;

}