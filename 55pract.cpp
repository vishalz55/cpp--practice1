//now u have to count no of 2 and also get input from user that 
//should be counded as input ghy ani count krun dakva 
//generalize

#include<iostream>
using namespace std;

int main(){
 int arr[10]={1,2,3,2,2,5,5,5,2};
  int twocount = 0;
 int size =10;

 for(int i = 0;i<size;i++)
 {
       if(arr[i]==2){
           twocount++;
       }
 }

 cout<<"Count of 2 is"<<twocount;


}

