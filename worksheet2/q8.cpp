#include<iostream>
#include<cstring>
using namespace std;

bool isPallindrome(char str[]){
    string temp = str;
    int n = strlen(str);
    for(int i = 0; i < n/2; i++){
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
    if(str == temp){
        return true;
    }
    return false;
}

int main(){
    char str[100];
    cout<<"Enter the string : ";
    cin.getline(str,100);
    if(isPallindrome(str)){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;   
}