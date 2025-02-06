#include<iostream>
using namespace std;
//yat na apn bool cha use kela return type 

bool  find(int arr[],int size,int key,bool flag)
{
     for(int i =0;i<size;i++)
     {
         if(arr[i]==key)
         {
             flag =1;
             break;
         }
     }
     
   return flag;
}
int main()
{
    int arr[10] ={10,20,30,40,50,60,70,80,90,100};
    int size =10;
    int key;
    bool flag = 0;
    cout<<"Enter the element u want to find";
    cin>>key;
    
    int findelement = find(arr,size,key,flag);
   
    if(findelement ==true)
    {
        cout<<"Element is present";
    }
    else
    {
        cout<<"element is not present";
    }
    
    return 0;
}