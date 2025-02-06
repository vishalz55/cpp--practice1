//vector ghy 
//elemet push kra 
//dispaly print vector 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    

    arr.push_back(10); //vichar kr function madhe agrument takun push krtoy tyla madhe smjl ka 
    arr.push_back(11);
    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(14);


   //print the vector 
   for(int i =0;i<arr.size();i++)
   {
      cout<<arr[i]<<endl;
   }
   
   arr.pop_back(); //last elemet jo ahe na to na bher kadto smjl ka 

 //   arr.pop_back(5); //wrong way mi as na kadu shkt nahi smjl ka 

        // kadl pop back ni pn bhava print kelas tr disel na 


   cout<<"after pop back result "<<endl;
    for(int i =0;i<arr.size();i++)
   {
      cout<<arr[i]<<endl;
   }     

    return 0;
}