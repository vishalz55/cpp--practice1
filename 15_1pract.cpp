// cal cluate sum ad avg of array elemet 

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5,5,5,5,5};

  //  size mahiti ye pn kaadun heun long case madhe array che elemet mpojat basnar ka 

    // int n = sizeof(arr[5]/arr[0]);  wrong way 
    int n = sizeof(arr)/sizeof(arr[0]);

   int sum =0;
   int avg = 0; //intialze krav lagye garbage value ghet nahi 

   // now find out the avg 
   for(int i=0;i<=n;i++)
   {
       
         // sum = sum +i;  // sum madhe store 
         sum = sum +arr[i];                    //aaray cha index no dila ani kam ye lement ch smj ka 

}

   //avg of an aaray 

      avg = sum /n;

  cout <<"sum is"<<sum<<endl;
  cout <<"avg is"<<avg<<endl;
    return 0;
}