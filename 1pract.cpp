//create a vector and tell about the size and capacity of a vector 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //create krtoy apn ata vector 
   // int<vector><> chukich ye smjl ka 
   // vector mg datatype madhe yete shevti tyach naav yete 
   //int <vector>arr; wrong he 
     // 

   vector<int>arr{10,20,30,40,50};         //vector mahde as declare kratat smj ka array
    
   //check the size and capacity 
    int m = sizeof(arr)/sizeof(arr[0]);
   // int n = sizeof(arr)/sizeof(arr[int]); kay he murkh 

    int n = sizeof(arr)/sizeof(int);

    cout<<m<<endl;
    cout<<n<<endl;
    // find the capacity of an array 

    //size mnje array chi current size 
    //capacity mnje bhava aste maximum no allocate kru shkto 


    cout<<arr.size()<<endl;

    cout<<arr.capacity()<<endl;

    return 0;
}