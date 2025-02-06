 

#include<iostream>
using namespace std;

int main()

{
   int array [] = {10,20,30,40,50,60};

    cout<<array[2]<<endl;

    // now update the value of an array 

    array[2] = 100;
    cout<<"after update"<<endl;
    cout<<array[2]; 

     //change the 4 element to 500
        array[4]=500;
        cout<<array[4]<<endl;


       //not work dont no
       // cout<<"Enter the value of the store value in array 2";
       // cin>>arr[2]<<endl;  


      // working 
      
        cout<<"Enter the value of the store value in array 2";
        cin>>array[2];

        cout<<array[2]<<endl;
        

    return 0;
}