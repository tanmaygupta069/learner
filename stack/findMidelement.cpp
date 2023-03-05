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
        int findMid(){
            if(top%2!=0){
                cout<<"Mid : "<<a[top/2]<<" and "<<a[(top/2)+1]<<endl;
            }
            else{
                cout<<"Mid : "<<a[(top+1)/2]<<endl;
            }
        }
        void stack(){
            for(int i=top;i>=0;i--){
                cout<<a[i]<<endl;
            }
        }
};
int main(){
    Stack st;
    int u,i,o=1;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.stack();
    st.findMid();
    st.pop();
    st.peek();
    st.isEmpty();
    st.isFull();
    return 0;
}