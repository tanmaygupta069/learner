#include<iostream>
#include<iomanip>
#include<map>
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
    node* reverseK(node* head,int k){
        node* curr=head;
        node* prev=NULL;
        node* next;
        int count=0;
        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(next!=NULL){
            head->next = reverseK(next,k);
        }
        return prev;
    }
    void removeDuplicateUnsorted(node* head){
        node* curr = head;
        node* prev = NULL;
        map<int,int>m;
        node* temp = head;
        m[curr->data]=1;
        prev = curr;
        curr=curr->next;
        while(curr!=NULL){
            if(m[curr->data]==1){
                prev->next = curr->next;
                free(curr);
            }
            else{
                m[curr->data] = 1;
                prev = curr;
            }
            curr=prev->next;
        }
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
    addAtHead(head,3);
    addAtHead(head,4);
    addAtHead(head,3);
    addAtHead(head,8);
    cout<<"Linked list before:"<<endl;
    display(head);
    removeDuplicateUnsorted(head);
    display(head);
}