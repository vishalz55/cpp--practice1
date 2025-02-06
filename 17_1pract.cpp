
//user kdun input gheun array chalvne 
#include<iostream>
using namespace std;

int main(){
    
   int m;
   cout<<"Enter the no u want to upto array"<<endl;
   cin>>m;
   int arr[m];

   cout<<"Enter ur array "<<endl;
   for(int i =0;i<m;i++)
   {
    cin>>arr[i];  // yethee na arr[m] yet nahi smjl ka yete arr[i] store kontya varible madhe
   }
   


    int total_sum =0 ;
   
    for(int i=0;i<m;i++){
        
        total_sum += arr[i];
    }
    

    double avg=total_sum/m;

    cout<<"sum "<<total_sum<<endl;
    
    cout<<"avg "<<avg<<endl;

    return 0;
}