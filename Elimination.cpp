#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        string val;
        cin>>val;
        stack<char>st;
        for(int i = 0;i<val.length();i++)
        {
            if(st.empty())
            {
                st.push(val[i]);
            }
            else if(st.top()=='0'&& val[i]=='1')
            {
                st.pop();
            }
            else
            {
                st.push(val[i]);
            }
        }
        if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
