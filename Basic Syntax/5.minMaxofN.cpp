#include<iostream>

using namespace std;

int main()
{
    int N, maxOfN, minOfN, inputOfN;
    cout << "Please enter the total number of members of the sequence: ";
    cin >> N;
    cout << "Please enter the members of the sequence: " << endl;
    cin >> inputOfN;
    maxOfN = inputOfN;
    minOfN = inputOfN;
    for(int i = 1; i < N; i++)
    {
        cin >> inputOfN;
        if(inputOfN > maxOfN)
        {
            maxOfN = inputOfN;
        }
        if(inputOfN < minOfN)
        {
            minOfN = inputOfN;
        }
    }
    cout << "The maximum of N is: " << maxOfN << endl << "The minimum of N is: " << minOfN << endl;
    return 0;
}
