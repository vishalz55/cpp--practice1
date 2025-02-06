#include<iostream>
using namespace std;

int main()
{
    //yat apn value display krnar ahot
    // int arr[10] ={1,2,5,4,8,7,9,6,5,4};

    // cout<<"The values of the arrays are ";

    //yani na arraya cha index print zala
    // for(int i = 0;i<10;i++)
    // {
    //     cout<<arr[10];
    // }

  // yani print hot kay tr bhava ARRay
    //   for(int i = 0;i<10;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }


    //////////////////////////////////doubt
   // mla n values sathi krach hot pn kay mahiti nahi ht te

    int n;
    cin>>n;
    int arr[n]; //yethe array la limit dsaya lagte smjl ka
    cout << "Enter the n  values into array";
    
        for (int i = 0;i<n;i++)
        {
        cin>>arr[i];  // yethee na arr[n] yet nahi smjl ka yete arr[i] store kontya varible madhe krtoy smjl ki 
        }

       cout<<"The values of the arrays are ";


        for(int i=0;i<n;i++)
        {
         cout<<arr[i]<<" ";
        }
        

    return 0;
}