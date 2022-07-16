//Reverse the array

#include <bits/stdc++.h>
using namespace std;
 
// Function to reverse array
void reverseArray(int arr[], int n)
{
    // Trick to assign -1 to a variable
    int x = (INT_MIN / INT_MAX);
 
    // Reverse array in simple manner
    for (int i = 0; i < n / 2; i++)
 
        // Swap ith index value with (n-i-1)th
        // index value
        swap(arr[i], arr[n + (x * i) + x]);
}
 
int main()
{
    int arr[] = { 5, 3, 7, 2, 1, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    reverseArray(arr, n);
 
    // print the reversed array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}
