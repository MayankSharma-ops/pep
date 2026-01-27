// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, -3, 7, 5, -6};
//     int n = 6;

//     for(int i = 0; i < n; i++) {
//         int sum = 0;
//         for(int j = i; j < n; j++) {
//             sum += arr[j];
//             if(sum == 0) {
//                 for(int k = i; k <= j; k++)
//                     cout << arr[k] << " ";
//                 cout << endl;
//             }
//         }
//     }
//     return 0;
// }



#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, -3, 7, 5, -6};
    int n = 6;

    int maxSum = arr[0];

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if(sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    cout << "Largest subarray sum = " << maxSum;
    return 0;
}





