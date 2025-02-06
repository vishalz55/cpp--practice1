//without flag use kryach tr 2 retrun 0 use krave 
#include<iostream>
using namespace std;

int main(){
   int arr[5] = {10, 20, 30, 40, 50};
   int n = 5;
   int key;
   
   cout << "Enter key: ";
   cin >> key;
   
   for(int i = 0; i < n; i++)
   {
       if(arr[i] == key)
       {
           cout << "Element is present" << endl;
           return 0; // Program stops execution once element is found
       }
   }
   
   // If we reach here, it means element was not found
   cout << "Element is absent" << endl;
   
   return 0;
}
