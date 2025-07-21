#include<iostream>
#include<vector>
using namespace std;

int appearingOnce(vector<int> arr){
    int xorr = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        xorr = xorr^arr[i];
    }
    return xorr;
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
    int once = appearingOnce(arr);
    cout<<once<<endl;
    return 0;
}