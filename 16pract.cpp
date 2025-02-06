#include<iostream>
using namespace std;

int main(){
     int arr[5];
     cout<<"Enter the array elemnts  5";
     
     for(int i =0;i<5;i++)
     {
         cin>>arr[i];
     }
     
     int n = sizeof(arr)/sizeof(arr[0]);
     
     int sum;
     int avg;
     
     for(int i =0;i<n;i++)
     {
         sum = sum + arr[i];
     }
     
     avg = sum/n;

     cout<<"THe sum is "<<sum<<endl;
     cout<<"THe avg is "<<avg;
     
     
}