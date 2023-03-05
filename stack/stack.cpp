#include<iostream>
using namespace std;
#define maxSize 10
class Stack{
    int top;
    int a[maxSize];
    public:
        Stack(){
            top=-1;
        }
        void push(int x){
            if(top == 9){
                cout<<"Stack overflow.";
            }
            else{
                a[++top]=x;
            }
            
        }
        int pop(){
            cout<<a[top--]<<endl;
        }
        int peek(){
            cout<<a[top]<<endl;
        }
        bool isEmpty(){
            cout<<(top==-1)<<endl;
        }
        bool isFull(){
            cout<<(top == 9)<<endl;
        }
};
int main(){
    Stack st;
    int u,i,o=1;
    // while(o==1){
    //     cout<<"ENter elements: ";
    //     cin>>u;
    //     st.push(u);
    //     cout<<"more?(1/0): ";
    //     cin>>o;
    // }
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.pop();
    st.peek();
    st.isEmpty();
    st.isFull();
    return 0;
}