//now we have to reverse an array

#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int size =6;
    int start =0;
    int end = size -1;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"The reverse array is "<<endl;
    for(int i =0;i<size ;i++)
    {
      cout<<arr[i];//print kryach arr i madhe takne 
    }

}