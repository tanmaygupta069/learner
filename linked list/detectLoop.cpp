#include<iostream>
using namespace std;
class node{
    node* next;
    int data;
    public:
    node(int x){
        data=x;
        next=NULL;
    }
    void addHead(node* &head,int x){
        node* n = new node(x);
        if(head==NULL){
            head=n;
            return;
        }
        // head->next=NULL;
        n->next=head;
        head=n;
    }
    void addTail(node* head,int x){
        node* n = new node(x);
        node* temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
        n->next=NULL;
    }
    void makeCycle(node* head,int pos){
        node* temp=head;
        node* starNode;
        int count=0;
        while(temp->next!=NULL){
            if(count==pos){
                starNode=temp;
            }
            temp=temp->next;
            count++;
        }
        temp->next = starNode;
    }
    bool detectLoop(node* head){
        node* fast=head;
        node* slow=head;
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
    void display(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl; 
    }
};
int main(){
    node* head = NULL;
    node s(3);
    s.addHead(head,2);
    s.addHead(head,4);
    s.addHead(head,5);
    s.addHead(head,6);
    cout<<"Before looping : "<<endl;
    s.display(head);
    s.makeCycle(head,2);
    // cout<<s.detectLoop(head);
    int ans = s.detectLoop(head);
    if(ans == 1){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    // cout<<"After looping :"<<endl;
    // s.display(head);
}