#include<iostream>
#include<string>
using namespace std;

bool isPlaindrome(string str, int size, int i = 0){
    if(i>=size/2){
        return true;
    }
    if(str[i] == str[size - i - 1]){
        return isPlaindrome(str,size,i+1);
    }else{
        return false;
    }
}

int main(){
    string str("a");
    cout<<"output:"<<isPlaindrome(str,str.length())<<endl;
    return 0;
}