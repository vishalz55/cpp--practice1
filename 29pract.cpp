#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,33,50,52,54,45,80,90,44,55};
    int i =0;
    if(arr[i]%2==0){
    cout<<"the given no at even"<<endl;
    for(;i<10;i++){
        cout<<arr[i];
    }
    }
    else{
        cout<<"the given odd"<<endl;
       for(;i<10;i++){
        cout<<arr[i];

        }


    }
}