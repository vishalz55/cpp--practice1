// //chatgpt ahe mnani kr ok 

// #include<iostream>
// using namespace std;

// int findpeakvalue(int arr[], int n) {
//     // Check for the edge case where the array has only one element
//     if (n == 1) {
//         return 0; // Return the index of the single element
//     }

//     // Check if the first element is a peak
//     if (arr[0] >= arr[1]) {
//         return 0; // Return the index of the first element
//     }

//     // Check if the last element is a peak
//     if (arr[n-1] >= arr[n-2]) {
//         return n-1; // Return the index of the last element
//     }

//     // Traverse the array from the second element to the second last element
//     for (int i = 1; i < n - 1; i++) {
//         // Check if the current element is greater than or equal to its neighbors
//         if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) {
//             return i; // Return the index of the peak element
//         }
//     }

//     return -1; // In case no peak is found, which theoretically shouldn't happen
// }

// int main() {
//     // Initialize the array
//     int arr[] = {1, 3, 20, 4, 1, 0};

//     // Calculate the size of the array
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Find the peak value
//     int peak = findpeakvalue(arr, n);

//     // Output the index of the peak element
//     cout << "The peak element is at index: " << peak << endl;

//     return 0;
// }



#include<iostream>
using namespace std;

int high(int arr[],int n)
{
    //ata ashi condition jyat only yekch element asel 
    if(n == 1){
    return 0;//0 ha index cha type ye
    }
    if(arr[0] >= arr[1]){ //not only less than equal to pn ye 
        return 0;
    }
     if(arr[n-1] >= arr[n-2]) {
        return n-1;//arr[n-1]dyachi garj nahi karan n-1 mnje  nste only n-1
    }

    for (int i = 1; i < n - 1;i++)
    {
        if(arr[i] >= arr[i+1] && arr[i] >=arr[i-1]){
        return i;
        }
    }
   
    return -1;//jr kontic condtion tru nahi zali tr pn pratically not possible 

};
int main (){

int arr[6] = {1, 3, 20, 4, 1, 0};//nana mzi chuki nahi code ch fastoy 
                             //change array 

                             ////done bro 
                             //on;u ya case sathi fstoy  int arr[] = {5, 4, 6, 8, 3, 2};
int n = sizeof(arr)/sizeof(arr[0]);

int peak = high(arr,n);

cout<<"The highest value of peak is "<<peak;
return 0 ;


}

//done bro 