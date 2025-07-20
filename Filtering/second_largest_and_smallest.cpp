#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int getSecondSmallest(vector<int> arr){
    if (arr.size() < 2) return -1;
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for(int i = 0; i < arr.size() ; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }else{
            if(arr[i] < secondSmallest && arr[i] != smallest){
                secondSmallest = arr[i];
            }
        }
    }
    return (secondSmallest == INT_MAX) ? -1 : secondSmallest;
}

int getSecondLargest(vector<int> arr){
    if (arr.size() < 2) return -1;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0; i < arr.size() ; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }else{
            if(arr[i] > secondLargest && arr[i] != largest){
                secondLargest = arr[i];
            }
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int secondSmallest = getSecondSmallest(arr);
    int secondLargest = getSecondLargest(arr);
    cout<<secondSmallest<<" "<<secondLargest<<endl;
    return 0;
}