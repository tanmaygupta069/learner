#include<iostream>
#include<cmath>
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
int size(node* head){
    int count = 0;
    node* temp = head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void convertBinary(node* head){
    node* temp = head;
    int decimal = 0;
    int n = size(head)-1;
    while(temp!=NULL){
        decimal = decimal + (temp->data)*pow(2,n);
        temp=temp->next;
        n--;
    }
    cout<<decimal<<endl;
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
    while(add!=0){
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
    push(head,1);
    push(head,1);
    push(head,1);
    push(head,1);
    push(head,1);
    display(head);
    convertBinary(head);
}