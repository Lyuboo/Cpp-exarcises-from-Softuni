#include<iostream>

using namespace std;

int main()
{
    unsigned long long int N = 0, remainder = 0, dividend, counting = 0;
    unsigned long long int factorialN = 1;
    cout << "Please enter a number N = ";
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        factorialN = factorialN * i;
    }
    cout << "N! = " << factorialN << endl;
    dividend = factorialN;
    while (remainder == 0)
    {
        remainder = dividend % 10;
        dividend = dividend / 10;
        counting = counting + 1;
    }
    cout << "There are " << counting - 1 << " zeros at the end of " << factorialN << endl;
    return 0;
}
