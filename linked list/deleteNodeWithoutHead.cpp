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
void delNode(node* n){
    node* temp=n->next;
    n->data=temp->data;
    n->next=temp->next;
    free(temp);
}
void push(node* &head,int val){
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
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    push(head,4);
    push(head,2);
    push(head,3);
    push(head,8);
    push(head,7);
    push(head,6);
    cout<<"Before:"<<endl;
    display(head);
    delNode(head);
    cout<<"After:"<<endl;
    display(head);
}