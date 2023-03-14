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
node* reverse(node* head){
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;
}
node* addTwoList(node* head1, node* head2){
    node* newhead1 = reverse(head1);
    node* newhead2 = reverse(head2);
    node* res = NULL;
    node* prev = NULL;
    int carry = 0;
    while(newhead1!=NULL || newhead2!=NULL){
        int c = ((newhead1->data + newhead2->data) % 10)+carry;
        carry = (newhead1->data + newhead2->data)/10;
        node* newhead3 = new node(c);
        if(res==NULL){
            res=newhead3;
        }
        else{
            prev->next=newhead3;
        }
        prev=newhead3;
        newhead1=newhead1->next;
        newhead2=newhead2->next;
    }
    return reverse(res);

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