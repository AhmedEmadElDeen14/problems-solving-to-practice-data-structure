/* Problem - 1
Given an array A[] of n numbers and another number x,
the task is to check whether or not there exist two elements in A[] whose sum is exactly x.
Input: arr[] = { 0, -1, 2, -3, 1 }, x = -2
Output : Yes
Input : arr[] = { 1, -2, 1, 0, 5 }, x = 0
Output : No
*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter 5 Number For Array : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int num;
    cout << "Enter Number : ";
    cin >> num;
    bool check = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = (i + 1); j < sizeof(arr); j++)
        {
            if (arr[i] + arr[j] == num)
            {
                check = true;
                break;
            }
        }
    }
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
