// I apologize for the confusion. Here is the code that separates the array into two arrays: one for even numbers and one for odd numbers:

// ```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[10] = {10, 20, 33, 40, 50, 60, 70, 87, 90, 100};

    int evenArr[10];
    int oddArr[10];
    int evenCount = 0;
    int oddCount = 0;

    // Separate even and odd numbers
    //traverse krto 
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];     //= mnje value store vayli kashy arr[i] chi kashyt even arr madhe smjl ki 
                                             //true false yevdh ahe condition madhe smjl ka hi condition true tr next line as
                                              //arr[peak] he na bhava nos astats smjl ka jyacha index peak
            evenCount++;                     //arr[evencount] yacha index ecencount asel
        } else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    // Print even numbers
    cout << "Even numbers:" << endl;
    for (int i = 0; i < evenCount; i++) {
        cout << evenArr[i] << " ";
    }
    cout << endl;

    // Print odd numbers
    cout << "Odd numbers:" << endl;
    for (int i = 0; i < oddCount; i++) {
        cout << oddArr[i] << " ";
    }
    cout << endl;

    return 0;
}
// ```

// This code creates two new arrays, `evenArr` and `oddArr`, to store the even and odd numbers from the original array. It then iterates over the original array, checks if each number is even or odd, and adds it to the appropriate array. Finally, it prints the even and odd numbers separately.