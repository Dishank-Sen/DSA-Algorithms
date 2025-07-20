#include<iostream>
#include<string>
using namespace std;

// n -> n + (n - 1) + .... + 1

int sum(int n){
    if(n == 1){
        return n;
    }
    int value = n + sum(n-1); 
    return value;
}

int main(){
    int n,value;
    cin>>n;
    value = sum(n);
    cout<<value<<endl;
    return 0;
}