#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node * next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return; 
    }
    tail->next = newnode;
    tail = tail->next; //or tail = newnode;
}
void print_linked_list(Node* head)
{
    Node* tmp =head;
    for(;tmp!=NULL;)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}
int main ()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    for(;true;)
    if(val==-1)
    {
        break;
    }
     
    return 0;
}