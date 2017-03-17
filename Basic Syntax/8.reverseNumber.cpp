#include<iostream>

using namespace std;
int reverseFunction(int number)
{
    int remainder, reverseNumber = 0;
    while(number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        reverseNumber = reverseNumber + remainder;
        reverseNumber = reverseNumber * 10;
    }
    reverseNumber = reverseNumber / 10;
    return reverseNumber;
}
int main()
{
    int inputNum;
    cout << "Please enter a number: ";
    cin >> inputNum;

    cout << reverseFunction(inputNum);
    return 0;
}
