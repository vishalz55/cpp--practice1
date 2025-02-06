//we have to check the size and capicity are same or not and 
//using aarr size and our genral size function 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[10] = {1,25,45,45};
  //no of elemenst of array 
  //we are checking by defalut value of the vector

    vector<int>arr;//declaration of the vector
  int n =sizeof(arr)/sizeof(arr[0]);
  int m =sizeof(arr)/sizeof(int); 
  cout<<n<<endl;
  cout<<m<<endl;

  cout<<arr.size()<<endl; // currently kiti no ahet te sangte
                          //function ahe je size sangte 
  cout<<arr.capacity()<<endl; //max no of elemnt allocate kru shkto te sangte 

}