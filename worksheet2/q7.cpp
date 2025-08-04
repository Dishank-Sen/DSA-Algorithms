#include<iostream>
#include<cstring>
using namespace std;

void reverse(char str[]){
    int n = strlen(str);
    for(int i = 0; i < n/2; i++){
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main(){
    char str[100];
    cout<<"Enter the string : ";
    cin.getline(str,100);
    reverse(str);
    cout<<str<<endl;
    return 0;   
}