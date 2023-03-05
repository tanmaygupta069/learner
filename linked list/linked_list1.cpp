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

int main(){
    node* head=NULL;
    node s(4);
    addAtHead(head,5);
    addAtTail(head,3);
    addAtHead(head,6);
    display(head);
}