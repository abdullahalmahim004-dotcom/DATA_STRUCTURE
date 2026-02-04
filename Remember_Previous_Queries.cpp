#include <bits/stdc++.h>
using namespace std;
void print_forward(list<int> &l)
{
    cout << "L -> ";
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}
void print_backward(list<int> &l)
{
    cout << "R -> ";
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    int q;
    cin >> q;
    list<int> l;
    for(int i=0;i<q;i++)
    {
        int x,val;
        cin >> x >> val;

        if (x == 0)
        {
            l.push_front(val);
        }
        else if (x == 1) 
        {
            l.push_back(val);
        }
        else if (x == 2) 
        {
            if (val < l.size()) 
            {
                auto it = next(l.begin(), val);
                l.erase(it);
            }
        }
        print_forward(l);
        print_backward(l);
    }
    return 0;
}
