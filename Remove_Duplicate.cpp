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
int multiple_remove_linked_list(Node *&head)
{   
    for (Node *i = head; i != NULL; i = i->next)
    {
        int flag = 0;
        for (Node *j = head; j != i; j = j->next)
        {
            if (j->val == i->val)
            {
                flag = 1;
                break;
            }
        }
        if (flag==0)
        {
            cout << i->val << " ";
        }
    }
    return 0;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    for (; cin >> val && val != -1;)
    {
        insert_val(head, tail, val);
    }
    multiple_remove_linked_list(head);
    return 0;
}