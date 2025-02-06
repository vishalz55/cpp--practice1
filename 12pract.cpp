//take array of size take the input from array and display it 
#include<iostream>
using namespace std;
// run hotay be 
//buti thinki ts not good practice so used vector instaed of it 

int main()
{
   //take array of size 10
   int m =10;
   int arr[m] ;

   /*imp 
   int m =10;
   int arr[m] ; he it ghetl kay kivha 

   user kadu ghetl yekch aste value assign krto varible la apn 
   cin>>m;
   */

    //imp 
   //he na krta yet nahi array chi length agodar decalre krav lagte 
   //to change the length of an array or take from user we used the vector


   //get from user 
   cout<<"Enter the elemnts of an array "<<endl;
   {
    for(int i =0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<"elemnts of an array are "<<endl;
    {
       // cout<<arr[i]<<endl;// wrong display krtana pn yek thodi display kryach ye 
        for(int i =0;i<m;i++)
    {
        cout<<arr[i]<<endl;
    }
    }
   } 
}
