#include<iostream>
#include <cstring>
using namespace std;

void upper(char str[]){
    for(int i = 0; i < strlen(str); i++){
        if(int(str[i]) >= 97 && int(str[i]) <= (97 + 25)){
            str[i] = char(int(str[i]) - 32); 
        }
    }
}

int main(){
    char str[100];
    cout<<"Enter the string : ";
    cin.getline(str, 100);
    upper(str);
    cout<<str<<endl;
    return 0;
}