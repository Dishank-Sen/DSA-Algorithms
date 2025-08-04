#include<iostream>
using namespace std;

void insert(int arr[], int* k, int n){
    for(int i = n; i >= 0 ; i--){
        if(*k >= *(arr + (i - 1))){
            *(arr + i) = *k;
            break;
        }else if(i == 0){
            *(arr) = *k;
        }else{
            *(arr + i) = *(arr + (i - 1));
        }
    }
}

int main(){
    int n,k;
    cout<<"Enter the array size : ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the digit to insert : ";
    cin>>k;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    insert(arr,&k,n);
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}