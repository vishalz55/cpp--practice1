#include<iostream>
using namespace std;

int main(){
    int arr[5] ={5,5,5,5,5};

    //int n = sizeof(arr)/sizeof(arr[0]);

    //int total_sum; if u not show the intialization with zero then 
                     //it shows the garbaeg value 


    //  int total_sum =0;

    // for(int i=0;i<5;i++)
    // {
    //     total_sum += arr[i];//yethe garbage value det ahe 

    // }

     int total_sum =0;

     for(int i=0;i<5;i++)
     {
         total_sum += arr[i];//yethe garbage value det ahe ka br tr int n mule 

     }




      cout<<"total sum is" <<total_sum;
 

    return 0 ;
}