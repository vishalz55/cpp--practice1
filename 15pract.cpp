//display sum and avg of the array element using a for loop

#include<iostream>
using namespace std;

int main(){
    
    int arr[5] ={5,5,5,5,5};   

    int n  = sizeof(arr)/sizeof(arr[0]);//array madhe kiti element ahet te find kryanasathi
    //tu kay jast elements asle tr find kranar ahes ka 

    int total_sum =0 ;//garbage value gheu nye mnhun apn kay krto 0 sobat krto
// abe initoialize nahii kelo tr kand zal veglach output al 


    //  for(int i=0;i<5;i++){   ks raht 19 20 cha frk rahto kay zal yethe mi na i<5
                               //kelo yani zal as ki value hi garbage value yet hoti compilwr madhe 
                               //int n mule yeth garbage value 
    //     total_sum += arr[i];//ha kay krel vrti jai ani pahil ki 5 ahe ok ka kothe  
    // }                       //yani zal kay 

    for(int i=0;i<n;i++){
        
        total_sum += arr[i];
    }

    cout<<"sum "<<total_sum<<endl;
    return 0;
}