#include<iostream>
#include<vector>
using namespace std;

int getSmallest(vector<int> arr){
    int smallest = arr[0];
    for(int i = 0; i < arr.size() ; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int getLargest(vector<int> arr){
    int largest = arr[0];
    for(int i = 0; i < arr.size() ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    return 0;
}