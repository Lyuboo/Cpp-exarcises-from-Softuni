#include<iostream>

using namespace std;

int main()
{
    int inputNum, remainder = 1, dividend;
    cout << "Please enter a number: ";
    cin >> inputNum;

    while(inputNum != 0)
    {
        remainder = inputNum % 10;
        inputNum = inputNum / 10;
        cout << remainder;
    }
    return 0;
}
