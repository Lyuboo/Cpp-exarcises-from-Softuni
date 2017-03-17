#include<iostream>

using namespace std;
int reverseFunction(int number)
{
    int remainder;
    while(number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        cout << remainder;
    }
}
int main()
{
    int inputNum;
    cout << "Please enter a number: ";
    cin >> inputNum;

    reverseFunction(inputNum);
    return 0;
}
