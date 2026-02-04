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
void print_list(Node* &head)
{
    Node* tmp =head;
    for(;tmp!=NULL;)
    {
        tmp = tmp->next;
    }
}
int count_linked_list(Node* &head)
{
    int cnt=0;
    Node* tmp =head;
    for(;tmp!=NULL;)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}
int main ()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    for(;cin>>val && val!=-1;)
    {
        //int val;
        // if(val==-1)
        // {
        //     break;
        // }
        insert_at_tail(head,tail,val);
    }
    print_list(head);
    //cout <<count_linked_list(head)<<endl;
    Node *head1=NULL;
    Node *tail1=NULL;
    for(;cin>>val && val!=-1;)
    {
        //int val;
        // if(val==-1)
        // {
        //     break;
        // }
        insert_at_tail(head1,tail1,val);
    }
    //cout << count_linked_list(head1)<<endl;
    //print_list(head1);
    if(count_linked_list(head)==count_linked_list(head1))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}