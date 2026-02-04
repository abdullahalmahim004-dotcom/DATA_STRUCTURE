#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_forward(Node *head)
{
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
}
void print_backward(Node *tail)
{
    for (Node *tmp = tail; tmp != NULL; tmp = tmp->prev)
    {
        cout << tmp->val << " ";
    }
    cout << endl;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}
int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    for(int i=0;i<q;i++)
    {
        int idx, val;
        cin >> idx >> val;
        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        if (idx == 0)
            insert_at_head(head, tail, val);
        else if (idx == sz)
            insert_at_tail(head, tail, val);
        else
            insert_at_any_pos(head, tail, idx, val);
        sz++;
        cout << "L -> ";
        print_forward(head);
        cout << "R -> ";
        print_backward(tail);
    }
    return 0;
}
