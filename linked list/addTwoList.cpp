#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void push(node* &head , int val){
    node* n = new node(val);
    node* temp =head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
}
void addHead(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* addTwoList(node* head1, node* head2){
    node* temp=head1;
    int num1=0;
    while(temp!=NULL){
        num1=num1*10+temp->data;
    }
    temp=head2;
    int num2=0;
    while(temp!=NULL){
        num2=num2*10+temp->data;
    }
    int add=num1+num2;
    node* head3 = NULL;
    while(add){
        int rem = add % 10;
        addHead(head3,rem);
        add=add/10;
    }
    return head3;
}
int main(){
    node* head =NULL;
    node* head1 = NULL;
    node* head2 = NULL;
    push(head,2);
    push(head,3);
    push(head,4);
    display(head);
    push(head1,3);
    push(head1,5);
    push(head1,6);
    display(head1);
    node* newHead = addTwoList(head,head1);
    display(newHead);
}