#include <iostream>
using namespace std;
int main(){

    // char ch = 'a';
    // char* ptr = &ch;
    // ch++;
    // cout << *ptr << endl;


    int a = 7;
    int *c = &a;
    a = a + 4;  // a will become 10
    cout<< a << endl;
    cout<< *c << endl;
    cout<< c << endl;  // c will print address of a


    int x = 7;
    int *ptr = &x;
    cout<< *ptr << endl;
    ptr = ptr + 3;
    cout<< x << endl;
    cout<< *ptr << endl; // Garbage_value
    cout<< ptr << endl;  // ptr will print address of x + 3* sizeof(int)



    return 0;
}