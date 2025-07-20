#include<iostream>
#include<string>
using namespace std;

// n,n-1,....1

void print(int i,int n){
    if(i>n){
        return;
    }
    cout<<n<<endl;
    print(i,n-1);
}

void print2(int i,int n){
    if(i>n){
        return;
    }
    print2(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    print2(1,n);
    return 0;
}