#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_val(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}
void search_list(Node *&head)
{
    int x;
    cin >> x;
    Node *tmp = head;
    int idx = 0;
    for (; tmp != NULL;)
    {
        if (tmp->val == x)
        {
            cout << idx << endl;
            return;
        }
        idx++;
        tmp = tmp->next;
    }
    cout << -1 << endl;
}
int main()
{
    int n;
    cin >> n;
    int val;
    for (int i = 1; i <= n; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        for (; cin >> val && val != -1;)
        {
            insert_val(head, tail, val);
        }
        search_list(head);
    }
    return 0;
}