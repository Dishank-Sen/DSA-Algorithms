#include<iostream>
#include<vector>
using namespace std;

int maxConsecutive(vector<int> arr){
    int max = 0;
    int pointer = 1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] == arr[i-1]){
            pointer++;
            if(pointer > max){
                max = pointer;
            }
        }else{
            pointer = 1;
        }
    }
    return max;
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
    int maxCons = maxConsecutive(arr);
    cout<<maxCons<<endl;
    return 0;
}