#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<long long> s;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        s.insert(x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            long long x;
            cin >> x;
            s.insert(x);
            cout << *s.begin() << endl;
        }
        else if (type == 1)
        {
            if (s.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << *s.begin() << endl;
            }
        }
        else if (type == 2)
        {
            if (s.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                s.erase(s.begin());
                if (s.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << *s.begin() << endl;
                }
            }
        }
    }

    return 0;
}
