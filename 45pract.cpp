//jr flag ani return nahi use kryach use this 


#include<iostream>
using namespace std;

int main(){
   int arr[5] = {10, 20, 30, 40, 50};
   int n = 5;
   int key;
   
   cout << "Enter key: ";
   cin >> key;
   
   int i;
   for(i = 0; i < n; i++)
   {
       if(arr[i] == key)
       {
           break; // Exit loop when the element is found
       }
   }
   
   // After loop, check whether we broke out early (found element) or not
   if(i < n)
   {
       cout << "Element is present" << endl;
   }
   else
   {
       cout << "Element is absent" << endl;
   }
   
   return 0;
}
