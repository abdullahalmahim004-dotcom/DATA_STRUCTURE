#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node * next;
    Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print_forward(Node* head)
{
    for(Node* tmp = head;tmp!=NULL;tmp=tmp->next)
    {
        cout<< tmp->val<<" ";
    }
    cout <<endl;
}
void print_backward(Node* tail)
{
    for(Node* tmp = tail;tmp!=NULL;tmp=tmp->prev)
    {
        cout<< tmp->val<<" ";
    }
    cout <<endl;
}
int main ()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * tail = new Node(30);

    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;
    print_forward(head);
    print_backward(tail);
    return 0;
}