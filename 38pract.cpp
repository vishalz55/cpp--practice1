//array kay jhe collection of similar  kindof atoms 
//ajun kay he tr data structure 
//continuous memory allocation hote 

#include<iostream>
using namespace std;


//     int arr[4] ;
//    // same output dete 
//     cout<<arr<<endl;
//     cout<<&arr<<endl;
 int main(){
    int arr[4] ={2,3,4,5};
    cout<<arr<<endl;//arr la pointer sark consider krte 


}

// A nice C++ question!

// In this code, arr is an array of integers with 4 elements: {2, 3, 4, 5}.

// When you write cout << arr << endl;, you might expect it to print the contents of the array, like 2 3 4 5. However, that's not what happens.

// In C++, when you use the << operator with an array, it doesn't automatically print the contents of the array. Instead, it treats the array as a pointer to the first element of the array.

// So, in this case, arr decays into a pointer to the first element of the array, which is &arr[0]. The cout statement will print the memory address of the first element of the array, not the contents of the array.

// To print the contents of the array, you would need to use a loop or a function that iterates over the array elements, like this:




