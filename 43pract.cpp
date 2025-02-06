

#include<iostream>
using namespace std;

bool find (int arr[],int size,int key){
    for(int i =0 ;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
        else{
            return false;
        }
    }

}

int main(){
   int arr[6] = {1,5,6,7,8,9};
   int size = 6;

   int key;
   cout<<"Enter the element u want to find"<<endl;
   cin>>key;

   if(find(arr,size,key))
   {
    cout<<"element is present"<<endl;
   }
   else{
    cout<<"elment is absent"<<endl;
   }

   return 0;
}