// without using bool lwe can get
// br bool cha used na apn na for loop chy ber takysathi krto elemnt la print krysathi smjl ki 


#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // We have to find if 60 is present in the array
    int target, position = -1;

    cout << "Enter element to find out: ";
    cin >> target;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == target)
        {
            position = i;  // Store the position of the element
            break;         // Stop searching after finding the element
        }
    }

    if (position != -1)  // Check if position was updated
    {
        cout << "Element present at position: " << position << endl;
    }
    else
    {
        cout << "Element absent" << endl;
    }

    return 0;
}
