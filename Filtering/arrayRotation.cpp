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

vector<int> reverse(vector<int> arr, int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}


// vector<int> rotateArray(vector<int> arr, int d){
//     int temp[d];
//     for(int i = 0; i < d; i++){
//         temp[i] = arr[i];
//     }
//     for(int i = d; i < arr.size(); i++){
//         arr[i-d] = arr[i];
//     }
//     for(int i = 0; i < d; i++){
//         arr[arr.size() - d + i] = temp[i];
//     }
//     return arr;
// }

vector<int> rotateArray(vector<int> arr, int d){
    arr = reverse(arr,0,d-1);
    arr = reverse(arr,d,arr.size() - 1);
    arr = reverse(arr,0,arr.size() - 1);
    return arr;
}

int main(){
    vector<int> arr, newArr;
    int n,d;
    cin>>n>>d;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    newArr = rotateArray(arr,d);
    for(int i = 0; i < newArr.size(); i++){
        cout<<newArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}