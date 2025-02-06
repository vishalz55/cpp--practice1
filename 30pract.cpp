

//int main(){
//     int arr[10] = {1,2,50,40,60,80,90,70,50,70};
    
//     //display values 
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;

 //     return 0;
// }

// 
// 

//   int main(){
//     int arr[10] = {1,2,50,40,60,80};
//     //wrong step
//     //int arr[2]= 11;
//     arr[2]=11;
//     cout <<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     return 0;
//    }


// int main(){
//     int arr[10] = {1,2,50,40,60,80};
//     for(int i = 0;i<10;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }


//get the value from user and dispay it
#include<iostream>
using namespace std;
int main(){
    //create an empty array 
    int arr[10];
    //insert the values into array 
    cout<<"Enter the values into an arrys "<<endl;
    for(int i = 0;i<10;i++)
    {
        cin>>arr[i];
    }

     cout<<"the values of the arrays are " <<endl;
     for(int i = 0;i<10;i++)
     {
        cout<<arr[i]<<" "<<endl;
     }


     return 0;
}



