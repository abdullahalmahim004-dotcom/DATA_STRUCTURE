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
void insert_at_tail(Node* &tail,int val)
{
    Node*newnode=new Node(val);
    if(tail==NULL)
    {
        tail=newnode;
        return;
    }
    Node* tmp =tail;
    for(;tmp->next!=NULL;)
    {
        tmp = tmp->next;
    }
    //right now tmp is at last node
    tmp->next = newnode;
}
void print_linked_list(Node* tail)
{
    Node* tmp =tail;
    for(;tmp!=NULL;)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}
int main ()
{
    Node* tail = NULL;//new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // tail->next =a;
    // a->next=b;
    insert_at_tail(tail,40);
    insert_at_tail(tail,40);
    insert_at_tail(tail,40);
    insert_at_tail(tail,40);
    // insert_at_tail(tail,50);
    // insert_at_tail(tail,60);
    // insert_at_tail(tail,70);
    print_linked_list(tail);
    return 0;
}