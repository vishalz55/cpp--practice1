//min value find krne arr
#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int arr[10]={5,25,65,32,25,105,55,45,25,32};
    int min = INT_MAX;
    int size =10;

    for(int i =0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min =arr[i];
        }
    }
    cout<<"the min value of arr is"<<min<<endl;

}