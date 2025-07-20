#include<iostream>
using namespace std;

int* reverseArray(int arr[],int size,int i=0){
    if(i>=size/2){
        return arr;
    }
    swap(arr[i],arr[size - i - 1]);
    reverseArray(arr,size,i+1);
    return arr;
}

int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int* rev = reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<rev[i]<<" ";
    }
    return 0;
}