
// *
// ***
// *****

// #include <iostream>
// using namespace std;
// int main() {
//     int i,j;
//     int n = 5;
//     for(i=0; i<n; i=i+2) {
//         for(j=0; j<=i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 1
// 12
// 123
// 1234
// 12345


// #include <iostream>
// using namespace std;
// int main() {
//     int i,j;
//     int n = 5;
//     for(i=0; i<n; i++) {
//         int val=1;
//         for(j=0; j<=i; j++) {
//             cout << val;
//             val++;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// Pascal


#include <iostream>
using namespace std;
int main() {
    int i,j;
    int n = 5;
    for(i=0; i<n; i++) {
        int val=1;
        for(j=0; j<=i; j++) {
            cout << val;
            val=val*(i-j)/(j+1); 
        }
        cout << endl;
    }
    return 0;
}



