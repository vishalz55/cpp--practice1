//count 0 and 1 in an array

//kadhi pn count jr kadhycha asel tr agodar tyala intialize kravch lagel bhava 
//code brober ahe pn yek case rahil jr dusra no asta tr ks kel asta 

// The difference between using multiple if statements and using an if - else if - else structure lies in how the conditions are evaluated and the flow of the program.

// 1. if - if - if
// Each if statement is evaluated independently.
// Even if one of the conditions is true, the program will still check the other conditions.

// 2. if - else if - else
// In this structure, the program evaluates conditions sequentially.
// Once a condition evaluates to true, the subsequent conditions are not evaluated.
// If no condition is true, the else block is executed (if present).

#include<iostream>
using namespace std;

int main(){
      int zeroCount = 0;
      int oneCount = 0;

      int arr[11] ={0,1,0,0,0,1,1,1,1,1,10};

      int size = 11;

      for(int i=0;i<size;i++)
      {
         if(arr[i]==0)
         {
            zeroCount++;
         }
         else if(arr[i]==1)
         {
            oneCount++;
         }
      }

      cout<<"THe no of the zeros are "<<zeroCount<<endl;
      cout<<"THe no of the ones are "<<oneCount<<endl;
      return 0 ;
}
