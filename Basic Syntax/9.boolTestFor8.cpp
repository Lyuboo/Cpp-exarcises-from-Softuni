#include<iostream>

using namespace std;

int reverseFunction(int number);
int testReverseFunction(int number);
int main()
{
    int inputNumber;
    cout << "Please enter a number: ";
    cin >> inputNumber;
    cout << reverseFunction(inputNumber) << " and test answer " << testReverseFunction(inputNumber) << endl;
}
int testReverseFunction(int number)
{
    int forCheck = reverseFunction(number);
    int remainder, reverseNumber = 0;
    bool answer;
    while(number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        reverseNumber = reverseNumber + remainder;
        reverseNumber = reverseNumber * 10;
    }
    reverseNumber = reverseNumber / 10;
    while(forCheck != 0)
    {
        if((forCheck % 10) != (reverseNumber % 10))
        {
            break;
        }
        else
        {
            forCheck = forCheck / 10;
            reverseNumber = reverseNumber / 10;
        }
        if(forCheck == 0)
        {
            answer = true;
        }
        else
        {
            answer = false;
        }
    }
    return answer;
}
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
