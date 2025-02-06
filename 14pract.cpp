//display sum and average of array element using the array 
//sadhi ghost yek aary dilay tytil elemnt chi sum and avg kadhychi 

#include<iostream>
using namespace std;

int main()
{
    int sum,avg;
    sum =0;   // abe initoialize nahii kelo tr kand zal veglach output al 
    int arr[5] ={5,5,5,5,5};
    //take the average of the folleing 
    // array madhe kiti elemet ahet te find out kryach used the sizeof operator 

    int n  = sizeof(arr)/sizeof(arr[0]);
    // total no of the array 

    // now find out the sum of the array 
   
   //wrong way 
    // for(int i=0;i<5;i++)
    // {
    //     sum +=i;
    // }

    //wrong way 
    //   for(int i=0;i<5;i++)
    // {
    //     sum +=arr[i];
    // }

    // n na kadta yet nahi mahun n aapn n ihito karan aaray madhe mahiti nst n ch arr[n] so 


         for(int i=0;i<n;i++)
        {
             sum +=arr[i];
        }
    
     cout<<"THe sum of the array is "<<sum<<endl; 
    
         
        avg = sum /n;
     
     cout<<"THe avg  of the array is "<<avg<<endl;
     
    return 0;
}