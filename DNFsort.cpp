#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[]={2,17,7,15,3};


    int i,j,temp=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
        }
    }
}

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}