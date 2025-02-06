#include<iostream>
using namespace std;

//the peak element of index  0of the value 100 fastay code bgu nantr 
//set  int arr[]={100,2,52,98,300}; ya array sathi

int target(int arr[],int size){
    //multiple condtiona asu shktat so used if 

    if (size==1)
    {
        return 0;                        // return arr[0]; right pn array n krta index la return kra print madhe array and index dakvta yeil 
    }
    if(arr[0]>=arr[1])
    {
        return 0;                                // return arr[0];  
    }
    if(arr[size-1]>=arr[size-2])
    {
              return size -1;                             //return arr[size-1];
    }

    for(int i =1;i<size-1;i++)  // i and size -1 pn al ahe 
    {
        if(arr[i]>=arr[i+1]&&arr[i]>=arr[i-1])
        {
             return i;                  // return arr[i];
            // imp  cout<<arr[i]; return krtay na na pn output detay re 98 mhun 
        }
    }
    return -1;

}

int main()
{
    int arr[]={10,20,52,98,30};
    //find the size of an array 
     int size = sizeof(arr)/sizeof(arr[0]);

     int peak = target(arr,size); //[] nste msjl ka pass krtana arr[]

     // index dakvaych ahe tr array cha ks krnar 
     //cout<<"the peak element of an arrya is "<<peak<<"of the index"<<peak[i]<<endl; wrong way

      //    cout<<"the peak element of an arrya is "<<peak<<"of the index"<<arr[i]<<endl; wrong way
          cout<<"the peak element of index  "<<peak<<"of the value "<<arr[peak]<<endl;

     // smjl ka kay hotay function tr value fekaylay pn ghenar nahi tyal koni 


    return 0;
}