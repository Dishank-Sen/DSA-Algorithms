#include<iostream>
#include<vector>
using namespace std;

// remove duplicates from sorted array
void removeDuplicate(vector<int> arr){
    int i(0);
    for(int j = 1; j < arr.size(); j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
}

vector<int> getNewRemoveDuplicate(vector<int> arr){
    vector<int> newArr;
    newArr.push_back(arr[0]);
    for(int i = 1; i < arr.size() ; i++){
        if(newArr.back() != arr[i]){
            newArr.push_back(arr[i]);
        }
    }
    return newArr;
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
    vector<int> newArr = getNewRemoveDuplicate(arr);
    for(int i = 0; i < newArr.size(); i++){
        cout<<newArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}