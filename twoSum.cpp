#include <iostream>
using namespace std;
int main(){

    int n=5;
    int arr[]={2,7,11,15,3};
    int target=9;
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"Indices: "<<i<<" "<<j<<endl;
                break;
            }
        }
    }

    return 0;
}