#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool swaped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                swaped = true;
            }
        }
        if(!swaped){
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}