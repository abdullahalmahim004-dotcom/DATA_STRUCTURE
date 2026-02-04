#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(const Student &a, const Student &b) const
    {
        if (a.marks != b.marks)
            return a.marks > b.marks; 
        return a.roll < b.roll;       
    }
};

int main()
{
    int N;
    cin >> N;

    set<Student, cmp> s;

    for (int i = 0; i < N; i++)
    {
        string n;
        int r, m;
        cin >> n >> r >> m;
        s.insert(Student(n, r, m));
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            string n;
            int r, m;
            cin >> n >> r >> m;
            s.insert(Student(n, r, m));
            auto it = s.begin();
            cout << it->name << " " << it->roll << " " << it->marks << endl;
        }
        else if (type == 1)
        {
            if (s.empty())
                cout << "Empty" << endl;
            else
            {
                auto it = s.begin();
                cout << it->name << " " << it->roll << " " << it->marks << endl;
            }
        }
        else if (type == 2)
        {
            if (s.empty())
                cout << "Empty" << endl;
            else
            {
                auto it = s.begin();
                s.erase(it);
                if (s.empty())
                    cout << "Empty" << endl;
                else
                {
                    auto it2 = s.begin();
                    cout << it2->name << " " << it2->roll << " " << it2->marks << endl;
                }
            }
        }
    }

    return 0;
}
