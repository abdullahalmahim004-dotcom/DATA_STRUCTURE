#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int d=n/2;
    int k=1;
    int s=1;
    int p=n-2;
    for(int i=0;i<d;i++)
    {
        for(int j=1;j<k;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<s;j++)
        {
            cout<<"\\";
        }
        k++;
        for(int j=p;j>0;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<s;j++)
        {
            cout<<"/";
        }
        p-=2;
        cout<<endl;
    }
    for(int i=0;i<d;i++)
    {
        cout<<" ";
    }
    cout<<"X"<<endl;
    int z=n/2-1;
    int c=1;
    for(int i=0;i<d;i++)
    {
        for(int j=z;j>0;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<s;j++)
        {
            cout<<"/";
        }
        z--;
        for(int j=0;j<c;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<s;j++)
        {
            cout<<"\\";
        }
        c+=2;
        cout<<endl;
    }
    return 0;
}