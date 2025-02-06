
//user kdun input gheun array chalvne 

//display  avg of the array element using a for loop


//mla na yat if else laun break kryact hot aloop 
//main aim user kdun imput gheun array print krne ha hota sum and avg

#include<iostream>
using namespace std;

int main(){
    
    int arr[100];

   cout<<"Enter ur array";
    int n  = sizeof(arr)/sizeof(arr[0]);

    

// he pn brober ahe ts joprant aarya value 100 hot nahi run kryach asto

   for(int i=0;i<n;i++)
   {
    if(arr[i]==100)
    {
        break;
    }
    
    else {
    cin>>arr[i];
    }

   }

    

    int total_sum =0 ;

    for(int i=0;i<n;i++){
        
        total_sum += arr[i];
    }

    double avg=total_sum/n;

    cout<<"sum "<<total_sum<<endl;
    
    cout<<"avg "<<avg<<endl;

    return 0;
}