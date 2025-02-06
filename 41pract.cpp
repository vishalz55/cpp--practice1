#include<iostream>
using namespace std;
// linear sech useing bool function 
//wrong code
bool flag (int arr[],int size,int key)
{
     for(int i =0;i<size;i++)
     {
        arr[i] =key;  
     }
}

int main()
{
    int key;

   int arr[7]={20,30,40,50,8,9,0};
   int size =7; // size dychi array chi smjl ka
   cout<<"Enter target"<<endl;
   cin>>key;
   
   
   int func =flag(arr,size,key); 

   cout<<"the target is "<<func<<endl;


    return 0;
}