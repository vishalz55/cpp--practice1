//we have to check the size and capicity are same or not and 
//using aarr size and our genral size function 
//nantr pahu 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
  

   vector<int>arr{1,25,45,45}; //declaration of the vector

  int n =sizeof(arr)/sizeof(arr[0]);
  int m =sizeof(arr)/sizeof(int); 
  cout<<n<<endl;
  cout<<m<<endl;

  cout<<arr.size()<<endl;
  cout<<arr.capacity()<<endl;


}