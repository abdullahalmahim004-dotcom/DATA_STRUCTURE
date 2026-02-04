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
void insert_at_tail(Node * &head,Node * &tail,int val)
{
    Node *newnode =new Node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void reverse_doubly_linked_list(Node *&head,Node*&tail)
{   
    int pal = 1;
    for(Node *i=head,*j=tail;i!=j&&i->prev!=j;i=i->next,j=j->prev)
    {
        if(i->val!=j->val)
        {
            pal = 0;
            break;
        }
    }
    if(pal)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main ()
{
    Node *head = NULL;
    Node * tail = NULL;
    int val;
    for(;true;)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    reverse_doubly_linked_list(head,tail);
    return 0;
}