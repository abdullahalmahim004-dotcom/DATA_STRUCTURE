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
    for(Node* tmp =head;tmp!=NULL;tmp = tmp->next)
    {
        cout<<tmp->val<<endl;
    }
}
void reverse_linked_list(Node *&head,Node*&tail,Node* tmp)// with recursion
{
    if(tmp->next==NULL) 
    {   
        head =tmp;
        return;
    }
    reverse_linked_list(head,tail,tmp->next);
    tmp->next->next =tmp;
    tmp->next = NULL;
    tail = tmp;
}
int main ()
{
    Node * head =NULL;
    Node * tail = NULL;
    int val;
    for (;true;)
    {
       cin>>val;
       if(val==-1)
       {
         break;
       }
       insert_at_tail(head,tail,val);
    }
    reverse_linked_list(head,tail,head);
    print_linked_list(head);
    return 0;
} 