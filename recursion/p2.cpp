#include<iostream>
#include<string>
using namespace std;

// 1,2,3 .... n

void print(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    print(i+1,n);
}

void print2(int n){
    if(n==0){
        return;
    }
    print2(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    // print(1,n);
    print2(n);
    return 0;
}