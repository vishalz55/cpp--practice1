//hach code with -1 krne 
#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    int arr[10]={14,25,65,32,25,105,55,45,25,32};
    int maxi = INT_MIN;
    int size =10;

    for (int i =0;i<size;i++)
    {
        if(arr[i]>maxi)
        {
            maxi =arr[i];
            
        }

    }
    cout<<"THe value of max no is "<<maxi<<endl;

    
}