#include<iostream>
#include<vector>
using namespace std;
// find out extreme values using the vector
//condtion yekch array sorted pahiej 

int main()
{
    //create a sorted arary 
    vector<int>arr{10,20,30,40,50,60,70,80,90,100};
    int start =0;
    int end = arr.size()-1; // as pn krta yet smjl ka 
                            // int size = 10;
                            // int start =0;
                            // int end =size - 1;

    // size declare ktrav lagto array acha 

    // now create the vector smjl ka 

    while(true)
    {
        if (start>end)     // abe ghe yevhd lihyya peksha na while madhech takund ena condtion houn jail 
        break;           // hach na for loop ne krun dakav smjl ka 
    
                         // i chi kay garj ye bhava smjlka faltu varible gheu nko 
    cout<<arr[start];
    cout<<arr[end];                     // direct condtion ani iteration kryach tr used like true false madhe 
    start++;
    end--;

    }

    return 0;
}