#include<iostream>

using namespace std;


int main()
{
    int length, counter = 1, counterMax = 0;
    cout << "Please enter the size of the array: ";
    cin >> length;
    int sequence[length];
    int * sequenceAdress = &sequence[0];

    for(int i = 0; i < length; i++)
    {
        cin >> sequence[i];
    }
    for(int i = 1; i <= length; i++)
    {
        if(sequence[i] == sequence[i - 1])
        {
            counter++;
        }
        if(sequence[i] != sequence[i - 1])
        {
            if(counter > counterMax)
            {
                counterMax = counter;
                sequenceAdress = &sequence[i - 1];
                //cout << counter << endl;
            }
            counter = 1;
        }
    }
    for(int i = 0; i < counterMax; i++)
    {
        cout << *(sequenceAdress - i) << endl;
    }
    return 0;
}
