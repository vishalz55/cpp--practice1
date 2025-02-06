#include<iostream>
using namespace std;


//ha brober ahe linear search sathi


int main(){
   int arr[6] = {1,5,6,7,8,9};
   int size = 6;
   bool flag = 0;//false not found element 

   int key;
   cout<<"Enter the element u want to find"<<endl;
   cin>>key;


   //linear search
   for(int i=0;i<size;i++){
    //cout<<"Check for the element "<<arr[i]<<"array" <<"key " <<key<<"posti"<<i<<endl;
    if(arr[i]==key){
        //found
        flag =1;//sidhi bat loop kadhi praynt chalyach jo pryant flag chi value 
               //one hot nahi ok 
               //ani 1 kdhi hoil value 
               //jo prynt condi true hot nahi to prt
        break; //if else madhe pn kay denar mg flag kadla tr
    }
    //break;
   }

               //arrrre yaaaaaaaaaaaaaaaaar   ha break kahli gela tr 
                   //yevdha value sapdt nahi kkay bolav ata    
                  //yala dry run krave 

   if(flag)
      cout<<"present"<<endl;

    else
      cout<<"absent"<<endl;  
   
   return 0;
}

// is it necessesary to give flag =1


// No, it's not necessary to explicitly set flag to 1 when the key element is found. In C++, any non-zero value is considered true in a boolean context, so you can simply use the assignment flag = true; instead of flag = 1;.

// In fact, using flag = true; is generally considered better practice because it makes the code more readable and self-explanatory. It clearly indicates that the flag variable is being set to a boolean value, rather than an arbitrary integer value.

// So, the corrected code would be:

// cpp
// Edit
// Copy code
// if (arr[i] == key) {
//     flag = true; // instead of flag = 1;
//     break;
// }
// By using flag = true;, you're making it clear that the flag variable is a boolean indicator, and that it's being set to a specific value to indicate a specific condition (in this case, that the key element has been found).

// It's worth noting that if you're using a modern C++ compiler, you can also use the bool keyword to declare the flag variable, like this:

// cpp
// Edit
// Copy code
// bool flag = false;
// This makes it even clearer that the flag variable is a boolean value, and helps to avoid any potential confusion about its type or purpose.
// no i mean not write flag =1 and flag = true


// I understand what you're asking now.

// In that case, you can simply remove the flag = 1 or flag = true assignment altogether, and the code will still work correctly.

// Here's the modified code:

// cpp
// Edit
// Copy code
// int main(){
//    int arr[6] = {1,5,6,7,8,9};
//    int size = 6;
//    bool flag = false;

//    int key;
//    cout<<"Enter the element u want to find"<<endl;
//    cin>>key;


//    //linear serch
//    for(int i=0;i<size;i++){
//     if(arr[i]==key){
//         flag = true; // remove this line
//         break;
//     }
//    }
//    if(flag)
//       cout<<"present"<<endl;

//     else
//       cout<<"absent"<<endl;  
   
//    return 0;
// }
// Becomes:

// cpp
// Edit
// Copy code
// int main(){
//    int arr[6] = {1,5,6,7,8,9};
//    int size = 6;
//    bool flag = false;

//    int key;
//    cout<<"Enter the element u want to find"<<endl;
//    cin>>key;


//    //linear serch
//    for(int i=0;i<size;i++){
//     if(arr[i]==key){
//         break;
//     }
//    }
//    if(i < size) // check if the loop was terminated early
//       cout<<"present"<<endl;

//     else
//       cout<<"absent"<<endl;  
   
//    return 0;
// }
// By removing the flag = true assignment, we can simply use the loop counter i to determine whether the key element was found or not. If the loop was terminated early (i.e., i < size), it means the key element was found, and we can print "present". Otherwise, we print "absent".

// This approach is a bit more concise and efficient, as it eliminates the need for an extra variable and assignment.