#include<bits/stdc++.h>
using namespace std;
class twoStack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
        twoStack(int n){
            size=n;
            top1=-1;
            top2=size;
            arr = new int[n];
        }
        void push1(int x){
            if(top1<top2-1){
                arr[++top1]=x;
            }
            else{
                cout<<"Stack overflow.";
            }
            
        }
        void push2(int x){
            if(top1<top2-1){
                arr[--top2]=x;
            }
            else{
                cout<<"Stack overflow.";
            }
        }
        int pop1(){
            if(top1>=0){
                cout<<arr[top1];
                return arr[top1--];
            }
            else{
                cout<<"Stack underflow.";
            }
        }
        int pop2(){
            if(top2>=0){
                cout<<(arr[top2]);
                return arr[top2++];
            }
            else{
                cout<<"Stack underflow.";
            }
        } 
};
int main(){
    twoStack sq(8);
    sq.push1(4);
    sq.push1(5);
    sq.push2(6);
    sq.push1(7);
    sq.push2(8);
    sq.push1(9);
    sq.pop1();
    sq.pop1();
    sq.pop2();
    sq.pop2();
    return 0;
}