//count 0 and 1 in an array

//kadhi pn count jr kadhycha asel tr agodar tyala intialize kravch lagel bhava 
//code brober ahe pn yek case rahil jr dusra no asta tr ks kel asta 

#include<iostream>
using namespace std;

int main(){
      int zeroCount = 0;
      int oneCount = 0;

      int arr[10] ={0,1,0,0,0,1,1,1,1,1};

      int size = 10;

      for(int i=0;i<size;i++)
      {
         if(arr[i]==0)
         {
            zeroCount++;
         }
         else
         {
            oneCount++;
         }
      }

      cout<<"THe no of the zeros are "<<zeroCount<<endl;
      cout<<"THe no of the ones are "<<oneCount<<endl;
      
      return 0 ;
}
