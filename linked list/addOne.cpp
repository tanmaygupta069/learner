#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    node* next;
    int data;
    node(int x){
        data = x;
        next = NULL;
    }
};
    void push(node* &head,int x){
        node* temp = head;
        node* n = new node(x);
        if(head==NULL){
            head=n;
            return;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = n;
        n->next=NULL;
    }
    void display(node* head){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    node* nFromLast(node* head,int N){
        node* temp = head;
        node* temp1 = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(N>count){
            cout<<"-1";
        }
        count = count-N;
        for(int i=0;i<count;i++){
            temp1=temp1->next;
        }
        cout<<temp1->data;
        return temp1;
    }
    void addOne(node* head){
        node* temp = head;
        int num=0;
        while(temp!=NULL){
            num=num*10+temp->data;
            temp=temp->next;
        }
        num=num+1;
        cout<<num;
    }
    node* lastToFirst(node* &head){
        node* temp = head;
        node* prev = NULL;
        while(temp->next!=NULL){
            prev = temp;
            temp=temp->next;
        }
        temp->next = head;
        head = temp;
        prev->next=NULL;
        return head;
    }
int main(){
    node* head = NULL;
    node s(3);
    push(head,3);
    push(head,4);
    push(head,5);
    push(head,6);
    cout<<"Before:"<<endl;
    display(head);
    addOne(head);
}