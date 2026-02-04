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
void print_tar_val(Node* head)
{
    int tar_val;
    cin>>tar_val;
    int idx=0;
    int flag = 0;
    Node* tmp =head;
    for(;tmp!=NULL;)
    {
        //cout<<tmp->val<<" ";
        if(tmp->val==tar_val)
        {
            cout<<idx<<endl;
            flag =1;
            return;
        }
        tmp = tmp->next;
        idx++;
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }
}
int main ()
{
    Node *head=NULL;
    Node *tail=NULL;
    int n;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        insert_at_tail(head,tail,val);
    }
    print_tar_val(head);
    return 0;
}