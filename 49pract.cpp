#include<iostream>
using namespace std;
//how to not take flag  

int main()
{   int key;
    
    int arr[5] ={10,20,30,40,50};
    int n =5;
    int flag =0;
    cout<<"Enter the value u want to find";
    cin>>key;
    
    for(int i =0;i< n ;i++)
    {   if(arr[i]==key){
         flag =1;
        break;
    }
    }
    if( flag)  //right way only (flag)
                 //flag ==1 right 
                 //flag ==0 right  for not present 
                 //flag =1 wrong method
                 //flag =0 wrong
                 //(true) wrong method 
                 //(flag =true ) wrong 
                 //(flag ==true )  right way
                 //(1)  wrong 
                 
    {
        cout<<"Elemnet is present"<<endl;
    }
    else
    {
         cout<<"Elemnet is not present"<<endl;
    }
    return 0;
    
}