//Intersection of two sorted Linked lists
#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node(int x){
        data=x;
        next=NULL;
    }
};
void push(node* &head,int val){
    node* temp = head;
    node* n = new node(val);
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
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* intersetionSorted(node* &head, node* &head1){
    node* temp=head;
    map<int,int> mp;
    while(temp!=NULL){
        mp[temp->data]=1;
        temp=temp->next;
    }
    temp=head1;
    node* prev =NULL;
    node* res = NULL;
    while(temp!=NULL){
        if(mp[temp->data]==1){
            node* head3 = new node(temp->data);
            if(res==NULL){
                res=head3;
            }
            else{
                prev->next=head3;
            }
            prev=head3;
        }
        temp=temp->next;
    }
    return res;
}
int main(){
    node* head = NULL;
    push(head,3);
    push(head,2);
    push(head,5);
    node* head1 = NULL;
    push(head1,3);
    push(head1,7);
    push(head1,5);
    display(head);
    display(head1);
    node* newhead = intersetionSorted(head,head1);
    display(newhead);

}