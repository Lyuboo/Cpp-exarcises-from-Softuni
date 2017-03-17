#include<iostream>

using namespace std;

int main()
{
    int inputOne, inputTwo, remainder, dividend, divisor;
    cout << "Please enter two numbers: ";
    cin >> inputOne >> inputTwo;
    remainder = 1;
    dividend = inputOne;
    divisor = inputTwo;
    while(remainder != 0)
    {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;

    }
    cout << "The Greatest Common Divisor of " << inputOne << " and " << inputTwo << " is " << dividend << endl;
    return 0;
}
