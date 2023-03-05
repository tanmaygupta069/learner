#include<iostream>
using namespace std;
int main(){
    int c = 4;
    int *ptr = &c;
    int **double_ptr = &ptr;
    cout<<(c)<<endl;
    cout<<(*ptr)<<endl;
    cout<<(*(*double_ptr))<<endl;
    return 0;
}

