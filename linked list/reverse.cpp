#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
    void addAtTail(node* &head,int val){
        node* n = new node(val);
        if(head==NULL){
            head=n;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
        n->next=NULL;
    }
    void addAtHead(node* &head,int val){
        node* n = new node(val);
        if(head==NULL){
            head=n;
            return;
        }
        n->next=head;
        head=n;
    }
    void display(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void push(node* head){
        node* temp=head;
    }
    void reverse(node* head){
        node* cur = head;
        node* pre=NULL;
        node* next=NULL;
        while(cur!=NULL){
            next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        head=pre;
    }

int main(){
    node* head=NULL;
    node s(4);
    addAtTail(head,5);
    addAtTail(head,3);
    addAtTail(head,6);
    cout<<"Linked list before :"<<endl;
    display(head);
    reverse(head);
    cout<<"Linked list after :"<<endl;
    display(head);
}