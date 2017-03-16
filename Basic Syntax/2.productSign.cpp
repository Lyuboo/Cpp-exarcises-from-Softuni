#include<iostream>
using namespace std;


int main()
{
    signed int sign = 1;
    signed int inputOne, inputTwo, inputThree;
    cin >> inputOne >> inputTwo >> inputThree;
    if(inputOne > 0)
    {
        sign = sign * 1;
    }
    else
    {
        sign = sign * (-1);
    }
    if(inputTwo > 0)
    {
        sign = sign * 1;
    }
    else
    {
        sign = sign * (-1);
    }
    if(inputThree > 0)
    {
        sign = sign * 1;
    }
    else
    {
        sign = sign * (-1);
    }
    if(inputOne == 0 || inputTwo == 0 || inputThree == 0)
    {
        sign = 0;
    }
    if(sign == 0)
    {
        cout << "The product is 0" << endl;
    }
    else if(sign > 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }
}
