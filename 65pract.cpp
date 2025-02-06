//check on online coplier 
//braber he 

#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    int start = 0;
    int end = size-1;

    while(start<=end)
    {
        if(start>end) 
        {    
          break;  
        }
      
        if(start==end)
        {
            cout<<arr[start];
        }
        else
        {
        cout<<arr[start]<<" " ;             
        cout<<arr[end]<<" ";
        }
        start++;
        end--;
     
        

    }
   

    return 0;

}