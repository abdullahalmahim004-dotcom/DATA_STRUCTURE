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
void insert_at_any_pos(Node * &head,int val,int idx)
{
    Node *newNode= new Node(val);
    Node* tmp= head;
    for(int i=1;i<idx;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next->prev=newNode;
    tmp->next=newNode;
    newNode->prev=tmp;
}
int main ()
{
    Node* head = new Node (10);
    Node* a = new Node (20);
    Node* tail = new Node (30);

    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;

    insert_at_any_pos(head,100,2);
    insert_at_any_pos(head,200,1);
    print_forward(head);
    return 0;
}