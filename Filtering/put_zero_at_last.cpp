#include<iostream>
#include<vector>
using namespace std;

vector<int> putLast(vector<int> arr){
    for(int j = 0, i = 1; i < arr.size(); ){
        if(arr[j] == 0){
            if(arr[i] != 0){
                swap(arr[j], arr[i]);
                j++;
                i++;
            }else{
                i++;
            }
        }else{
            j++;
            i++;
        }
    }
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
    newArr = putLast(arr);
    for(int i = 0; i < newArr.size(); i++){
        cout<<newArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}