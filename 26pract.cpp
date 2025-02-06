// read this document imp 






// Your code has a few logical and syntactical issues. Here's a breakdown of the problems and their fixes:

// Issues in Your Code:
// Uninitialized evenCount and oddCount:

// evenCount and oddCount are declared but not initialized, so their values are undefined. This will lead to unpredictable behavior when used as array indices.
// Loop for Printing Arrays:

// In the print loop:
// cpp
// Copy
// Edit
// cout << evenarr << endl;
// You are printing the address of evenarr instead of its elements. You need to use evenarr[i].
// Size of Arrays:

// The size of the evenarr and oddarr is fixed at 10, but the input array (arr) contains fewer elements. If more elements are added to the input array, it may exceed the size of the evenarr or oddarr.
// Printing Logic:

// You loop through all 10 elements of evenarr and oddarr, but only evenCount or oddCount elements contain valid data.
// Fixed Code:
// Here’s the corrected version of your code:

// cpp
// Copy
// Edit
// #include <iostream>
// using namespace std;

// int main() {
//     // Input array
//     int arr[8] = {2, 3, 5, 4, 6, 8, 9, 10}; // Array has 8 elements

//     // Arrays for even and odd numbers
//     int evenarr[8]; // Max size is the same as the input array
//     int oddarr[8];  // Max size is the same as the input array

//     // Counters for even and odd numbers
//     int evenCount = 0;
//     int oddCount = 0;

//     // Separate even and odd numbers
//     for (int i = 0; i < 8; i++) {
//         if (arr[i] % 2 == 0) {
//             evenarr[evenCount] = arr[i];
//             evenCount++;
//         } else {
//             oddarr[oddCount] = arr[i];
//             oddCount++;
//         }
//     }

//     // Print the even numbers
//     cout << "Even numbers array:" << endl;
//     for (int i = 0; i < evenCount; i++) {
//         cout << evenarr[i] << " ";
//     }
//     cout << endl;

//     // Print the odd numbers
//     cout << "Odd numbers array:" << endl;
//     for (int i = 0; i < oddCount; i++) {
//         cout << oddarr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// Key Fixes and Explanation:
// Initialized evenCount and oddCount:

// Before using these variables as indices, I initialized them to 0:
// cpp
// Copy
// Edit
// int evenCount = 0;
// int oddCount = 0;
// Used Dynamic Loop for Printing:

// While printing the arrays, I looped only up to the evenCount or oddCount value:
// cpp
// Copy
// Edit
// for (int i = 0; i < evenCount; i++) {
//     cout << evenarr[i] << " ";
// }
// Adjusted Input Array Size:

// The size of the input array was adjusted to match the number of elements (int arr[8]).
// Printed Array Elements, Not Addresses:

// Replaced cout << evenarr with cout << evenarr[i] to print the actual elements.
// Output:
// For the given input array {2, 3, 5, 4, 6, 8, 9, 10}, the output will be:

// c
// Copy
// Edit
// Even numbers array:
// 2 4 6 8 10 
// Odd numbers array:
// 3 5 9 