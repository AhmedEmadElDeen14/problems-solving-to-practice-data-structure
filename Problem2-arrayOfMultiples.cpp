/* Problem-2
Create a function that takes two numbers as arguments(num, length) and returns an array of multiples of num until the array length reaches length.Input: arr[] = { 0, -1, 2, -3, 1 }, x = -2
Examples
arrayOfMultiples(7, 5) ➞[7, 14, 21, 28, 35]
arrayOfMultiples(12, 10) ➞[12, 24, 36, 48, 60, 72, 84, 96, 108, 120]
arrayOfMultiples(17, 6) ➞[17, 34, 51, 68, 85, 102]
 */
#include <iostream>
#include <vector>
using namespace std;
void arrayOfMultiples(int, int);
int main()
{
    int num, length;
    cout << "Enter First Number : ";
    cin >> num;
    cout << "Enter The Length Of The Array : ";
    cin >> length;
    arrayOfMultiples(num, length);
}
void arrayOfMultiples(int num, int length)
{
    vector<int> arr;
    arr.push_back(num);
    for (int i = 1; i < length; i++)
    {
        arr.push_back(num + arr[i - 1]);
    }
    cout << "[ ";
    for (int j = 0; j < sizeof(arr); j++)
    {
        if (j != (length - 1))
        {
            cout << arr[j] << " , ";
        }
        else
        {
            cout << arr[j] << " ]";
        }
    }
}