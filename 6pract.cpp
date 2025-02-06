
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
    arr.pop_back(5);//pop_back() Method: The pop_back() function in C++'s vector doesn't take any arguments. 
                    //It removes the last element from the vector. So, arr.pop_back(5); is incorrect. It should be just arr.pop_back();.
    // mnje mi jr bol lo mla 50 kadych tr kadta yet nahi direct

   arr.pop_back();//right way remove last element only

   //print the vector        //i ki value choti condition ke liye 
                             //check with the size arr function 
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;      //treat like an array 
   }
   return 0;

}