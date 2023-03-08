#include<iostream>
using namespace std;
#define maxSize 10
class Queue{
    int rear;
    int front;
    int a[maxSize];
    public:
        Queue(){
            rear=-1;
            front=0;
        }
        void enqueue(int x){
            if(rear == 9){
                cout<<"Queue Full.";
            }
            else{
                a[++rear]=x;
            }  
        }
        int dequeue(){
            cout<<a[front++]<<endl;
        }
        int peek(){
            cout<<a[front]<<endl;
        }
        bool isEmpty(){
            cout<<(rear==-1)<<endl;
        }
        bool isFull(){
            cout<<(rear== 9)<<endl;
        }
};
int main(){
    Queue q;
    int u,i,o=1;
    // while(o==1){
    //     cout<<"ENter elements: ";
    //     cin>>u;
    //     st.push(u);
    //     cout<<"more?(1/0): ";
    //     cin>>o;
    // }
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.dequeue();
    q.peek();
    q.isEmpty();
    q.isFull();
    return 0;
}