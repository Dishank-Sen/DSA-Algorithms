#include<iostream>
#include<vector>
using namespace std;

//in this xor will be maximum equal to the array size
int missingNumber(vector<int> arr){
    int xor1 = 0, xor2 = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^(n+1);
    return xor1^xor2;
}

// in this problem is that the sum value can go so large

// int missingNumber(vector<int> arr){
//     int n = arr.size();
//     int sum = (n+1)*(n+2)/2;
//     int arrSum = 0;
//     for(int i = 0;i < n;i++){
//         arrSum = arrSum + arr[i];
//     }    
//     return sum - arrSum;
// }

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int missingNo = missingNumber(arr);
    cout<<missingNo<<endl;
    return 0;
}