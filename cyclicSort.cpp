#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0;
    while (i < n) {
        int correct = arr[i] - 1;
        if (arr[i] != arr[correct]) {
            swap(arr[i], arr[correct]);
        } else {
            i++;
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] != i + 1) {
            cout << arr[i] << " ";
        }
    }

    delete[] arr;
    return 0;
}
