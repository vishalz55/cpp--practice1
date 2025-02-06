//ghetleya array la double krun print kela 
#include<iostream>
using namespace std;
int main()

{   int n;
   
    cout<<"how many element take into the arry ";
    cin>>n;
    int arr[n];
    
    //take the input from user 
    
    cout<<"Enter the values enter to array "<<endl;
    
    for(int i = 0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"THe values of the arrays are "<<endl;
    
    for(int i = 0;i<n;i++)
    {
        cout<<2 *arr[i]<<endl;
    }
    return 0;

}