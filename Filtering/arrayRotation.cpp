#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateArray(vector<int> arr){
    int temp = arr[0];
    for(int i = 1; i < arr.size(); i++){
        arr[i-1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
    return arr;
}

int main(){
    vector<int> arr, newArr;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    newArr = rotateArray(arr);
    for(int i = 0; i < newArr.size(); i++){
        cout<<newArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}