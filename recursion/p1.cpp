#include<iostream>
#include<string>
using namespace std;

void print(string name,int n){
    if(n == 0){
        return;
    }
    cout<<name<<" "<<n<<endl;
    print(name,n-1);
}

int main(){
    int n;
    string name;
    cin>>n>>name;
    print(name,n);
    return 0;
}