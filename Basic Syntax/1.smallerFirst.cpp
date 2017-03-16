#include<iostream>
using namespace std;

int main()
{
    int inputOne, inputTwo, excVariable;
    cin >> inputOne >> inputTwo;
    if(inputOne > inputTwo)
    {
        excVariable = inputOne;
        inputOne = inputTwo;
        inputTwo = excVariable;
    }
    cout << inputOne << endl << inputTwo << endl;
    return 0;
}
