#include<iostream>
#include<cstring>
using namespace std;

void lower(char str[]){
    for(int i = 0; i < strlen(str); i++){
        if(int(str[i]) >= (97 - 32) && int(str[i]) <= (97 + 25 - 32)){
            str[i] = char(int(str[i]) + 32); 
        }
    }
}

int main(){
    char str[100];
    cout<<"Enter the string : ";
    cin.getline(str,100);
    lower(str);
    cout<<str<<endl;
    return 0;
}