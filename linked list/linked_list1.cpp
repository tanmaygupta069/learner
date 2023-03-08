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
    void deleteTail(node* head){
        
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
    int i=4;
    while(i==4){
        cout<<"What do you want to do ?"<<endl;
        cout<<"1.Push       2.Pop       3.Display"<<endl;
        cin>>i;
    }
    node s(4);
    int j=1;
    while(j==1){
        int u;
        cout<<"Enter the elements of the linked list: ";
        cin>>u;
        addAtTail(head,u);
        cout<<"Want to enter more(1/0) : ";
    }
    display(head);
}