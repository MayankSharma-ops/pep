#include <iostream>
#define MAX 100
using namespace std;
class Stack{
    int arr[MAX];
    int top;
    public:
    Stack(){
        top=-1;
    }
    bool isempty(){
        return (top==-1);
    }
    bool isfull(){
        return (top==MAX-1);
    }
    void push(int x){
        if(isfull()){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else{
            arr[++top]=x;
            cout<<x<<" pushed to stack"<<endl;
        }
    }
    void pop(){
        if(isempty()){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else{
            cout<<arr[top--]<<" popped from stack"<<endl;
        }
    }
    int peek(){
        if(isempty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"Top element is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Top element is: "<<st.peek()<<endl;


    return 0;
}