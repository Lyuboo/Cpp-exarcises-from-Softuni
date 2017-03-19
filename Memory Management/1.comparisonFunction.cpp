#include<iostream>

using namespace std;

bool compArr(int arr1[], int length1, int arr2[], int length2);

int main()
{
    int length1, length2;
    cout << "Please enter the size of the first array: ";
    cin >> length1;
    cout << "Please enter the size of the second array: ";
    cin >> length2;
    int array1[length1], array2[length2];
    cout << "Please enter members for the first array: ";
    for(int i = 0; i < length1; i++)
    {
        cin >> array1[i];
    }
    cout << "Please enter members for the second array: ";
    for(int i = 0; i < length2; i++)
    {
        cin >> array2[i];
    }
    if(compArr(array1, length1, array2, length2))
    {
        cout << "The two arrays are equal";
    }
    else
    {
        cout << "The two arrays are not equal";
    }
    return 0;
}
bool compArr(int arr1[], int length1, int arr2[], int length2)
{
    int maxVal, counter = 0;
    if(length1 >= length2)
    {
        maxVal = length1;
    }
    else
    {
        maxVal = length2;
    }
    for(int i = 0; i < maxVal; i++)
    {
        if(arr1[i] != arr2[i])
        {
            counter++;
            break;
        }
    }
    return !counter;
}
