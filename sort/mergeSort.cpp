#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int low, int high){
    int mid = (low + high)/2;
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    if(left<=mid){
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
    }
    if(right<=high){
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
    }
    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low >= high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high);
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}