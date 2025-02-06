//bool flag =0 mnje flag chi value geli madhe tyat smjl ki 
// linear search 
// is it required to used bool flag in the linear serach 
// loop chy bher jr condition deun print kryach tr used bool 
//function bnvyn mla na postion pn kadychi ye tyachi kontya postionla elemnt present ye 

#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
   //we have to fing the 60 is present or not in an arry
   bool flag = 0;
   int target;

   cout<<"Enter elemt to find out"<<endl;
   cin>>target;
    for(int i =0;i<10;i++)
    {
        if(arr[i]==target)
        {
            flag =1; 
            break;              // pudhe break kra 
        }
    }

     if(flag ==1)                 // if(flag =1) wrong way value store krte 
    {
      cout<<"elemnt present";
    }
    else{
        cout<<"elemnt absent";
    }

    return 0;
}