#include<iostream>
using namespace std;
//linear search

int main(){
   int arr[5] = {10,20,30,40,50} ;
   int n = 5;
   int key;
   bool flag =0;
   
   cout<<"Enter key";
   cin>>key;
   
   for(int i =0;i<n;i++)
   {
       if(arr[i]==key)
       {
           flag = true;
           break; // jo praynt 1 hot nahi to pryant chalnar 
       }
   }
   if (flag)
   {
       cout<<"Element is present"<<endl;
   }
   else 
   {
       cout<<"Element is absent"<<endl;
   }
   
   
}