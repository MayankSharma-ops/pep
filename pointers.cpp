#include <iostream>
using namespace std;
int main(){

    int num=10;
    int *p = &num;
    cout<<"Value of num is "<<*p<<endl;
    (*p)++;
    cout<<"Value of num after incrementing using pointer is "<<num<<endl;



    int n=5;
    int *ptr = &n;
    int a=10;
    *ptr=a;  // again no need to initialize pointer with &
    cout<<*ptr<<endl;
    cout<<n<<endl;



    int *q = 0; // q pointer is initialized to null
    int x = 10;
    *q = x;  // *q will store value of x at address 0, which is invalid
    cout << *q << endl;


    return 0;
}