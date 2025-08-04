#include<iostream>
using namespace std;

int main(){
    int* arr1 ,*arr2;
    arr1=(int*)malloc(5*sizeof(int));
    arr2=(int*)calloc(5, sizeof(int));
    for(int i=0;i<5;i++)
    {
    *(arr1+i)=i+1;
    cout<<*(arr1+i)<<" "; // 1,2,3,4,5
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
    cout<<*(arr2+i)<<" "; //All should be 0
    }
    cout<<endl;
    arr1=(int*) realloc(arr1,8*sizeof(int));
    for(int i=0;i<8;i++)
    {
    *(arr1+i)=i+1;
    cout<<*(arr1+i)<<" "; //1,2,3,4,5,6,7,8
    }
    cout<<endl;
    arr1=(int*) realloc(arr1,3*sizeof(int));
    for(int i=0;i<3;i++)
    {
    cout<<*(arr1+i)<<" "; //1,2,3
    }
    cout<<endl;
    return 0;
}