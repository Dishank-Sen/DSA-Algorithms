#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min = arr[i];
        for(int j=i;j<n;j++){
            if(arr[j] < min){
                swap(arr[i],arr[j]);
            }
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
    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}