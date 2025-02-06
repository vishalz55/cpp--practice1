// insert element and check whtat goes into it in vector through puah 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
   
    arr.push_back(5);
    arr.push_back(6);        //dont confuse in size of arr used in array 
                             // and arr size  used in vector 
                             //vector has easy manala satart with vector name always 


    arr.push_back(10);
    arr.push_back(50);
    arr.push_back(100);

   //print the vector        //i ki value choti condition ke liye 
                             //check with the size arr function 
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;      //treat like an array 
   }
   return 0;

}