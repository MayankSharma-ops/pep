#include <iostream>
using namespace std;
int main(){
    int n=6;
    int arr1[n]={2,4,6,8,10,12};
    int m=4;
    int arr2[m]={1,3,5,7};
    int arr3[n+m];
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(int p=0;p<n+m;p++){
        cout<<arr3[p]<<" ";
    }

    return 0;
}