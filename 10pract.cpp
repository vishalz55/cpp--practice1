//take the input from the user 
//print using vector 


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter the arary want to print "<<endl;
    cin>>n;

    vector<int>arr(n);    // he fuckt vrti krtaat laskhy thevha 
  
    cout<<"Enter the elements of aarryay"<<endl;
    for(int i =0;i<n;i++)
    {
       cin>>arr[i];
    }

    cout<<"The elemest of ararays are "<<endl;
     for(int i =0;i<n;i++)
    {
       cout<<arr[i]<<endl;
    }

    return 0;
}

