#include<iostream>

using namespace std;
int NOfFibonacci(int number);
int main()
{
    int inputNumber = 0;
    cout << "Which number of Fibonacci you wanna know? ";
    cin >> inputNumber;
    cout << NOfFibonacci(inputNumber);
}

int NOfFibonacci(int number)
{
    if(number == 0)
    {
        return 0;
    }
    else if(number == 1)
    {
        return 1;
    }
    return NOfFibonacci(number - 1) + NOfFibonacci(number - 2);
}
