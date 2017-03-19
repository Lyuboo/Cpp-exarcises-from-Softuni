#include<iostream>

using namespace std;

void selectionSort(int a[], int start, int endd);


int main()
{
    int length, start, endd;
    cout << "Please enter a size for the array: ";
    cin >> length;
    int arrayRange[length];
    cout << "Please complete the array: ";
    for(int i = 0; i < length; i++)
    {
        cin >> arrayRange[i];
    }
    cout << "Please enter from which member to sort the array: ";
    cin >> start;
    cout << "Please enter to which member to sort the array: ";
    cin >> endd;
    selectionSort(arrayRange, start, endd);
    for(int i = 0; i < length; i++)
    {
        cout << arrayRange[i] << endl;
    }
    return 0;
}

void selectionSort(int a[], int start, int endd)
{
    int * exchangeAddress1;
    int * exchangeAddress2;
    int helpExchange;
    for(int i = start; i < endd; i++)
    {
        exchangeAddress1 = &a[i];
        for(int e = i + 1; e < endd; e++)
        {
            exchangeAddress2 = &a[e];
            if((*exchangeAddress2) < (*exchangeAddress1))
            {
                helpExchange = *exchangeAddress1;
                *exchangeAddress1 = *exchangeAddress2;
                *exchangeAddress2 = helpExchange;
            }
        }
    }
}
