#include<iostream>
#include<vector>
using namespace std;

vector<int> unionArr(vector<int> arr1, vector<int> arr2){
    vector<int> newArr;
    int i = 0;
    int j = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();
    while (i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j]){
            if(newArr.size() == 0 || newArr.back() != arr1[i]){
                newArr.push_back(arr1[i]);
            }
            i++;
        }else{
            if(newArr.size() == 0 || newArr.back() != arr2[j]){
                newArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    while (i < n1)
    {
        if(newArr.back() != arr1[i]){
            newArr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if(newArr.back() != arr2[j]){
            newArr.push_back(arr2[j]);
        }
        j++;
    }
    
    
    return newArr;
}

int main(){
    vector<int> arr1, arr2, newArr;
    int n1,n2;
    cin>>n1>>n2;
    for(int i = 0; i < n1; i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    for(int i = 0; i < n2; i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }
    newArr = unionArr(arr1, arr2);
    for(int i = 0; i < newArr.size(); i++){
        cout<<newArr[i]<<" ";
    }
    cout<<endl;
    return 0;
}