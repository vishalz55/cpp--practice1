#include<iostream>
#include<vector>
using namespace std;

int main()
{   vector<int>arr;
      arr.push_back(10); //no need of data type takychi yat 
      arr.push_back(20); //garj nahi datatype
      arr.push_back(30); //yat pn [] nsun () ahe 
      arr.push_back(40);
      arr.push_back(50);
      arr.push_back(60);
      arr.push_back(70);
      arr.pop_back(); //yat na 50not give argument 
                     //direct last elemnt kadun takte 
    
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}