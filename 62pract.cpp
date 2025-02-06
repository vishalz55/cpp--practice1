//extreme print krne 
//ha code extectute hoto br ka online complier vrti 


//{1,2,3,4,5,6}  ={1,6,2,5,3,4}


// sorted array ahe be kay ehe 
// easy aste jr sorted nsta tr 


#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    int start = 0;
    int end = size-1;

    while(true)
    {
        if(start>end)         //;ithe semi colon dilo ani ouput betat navt 
          break;              //iteh break mnje as ahe if(start>end)                                                            //
        cout<<arr[start]<<" " ; //                     {     break
                                //                      }                
        cout<<arr[end]<<" ";
        start++;
        end--;

        

    }
   

    return 0;

}