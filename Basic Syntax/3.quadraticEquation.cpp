#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double x, a, b, c, x1solution, x2solution, discriminant;
    cout << "Please enter the coefficient a, b, c" << endl;
    cin >> a >> b >> c;
    //ax^2 + bx + c = 0
    discriminant = b*b - 4*a*c;
    if( a == 0 && b == 0 && c == 0)
    {
        cout << "There is no equation" << endl;
    }
    else
    {
        if(a == 0)
        {
            if(c == 0)
            {
                x1solution = 0;
                cout << "The equation have one solution: x = " << x1solution << endl;
            }
            else
            {
                x1solution = (-1)*c / (double)b;
                cout << "The equation have one solution: x = " << x1solution << endl;
            }
        }
        else if(discriminant < 0)
        {
            cout << "There no real root for that equation!" << endl;
        }
        else if(discriminant == 0)
        {
            x1solution = (-1)*b / (2*((double)a));
            cout << "The equation have one double solution x1 = x2 = " << x1solution << endl;
        }
        else
        {
            x1solution = ((-1)*b + sqrt((double)discriminant)) / (2*((double)a));
            x2solution = ((-1)*b - sqrt((double)discriminant)) / (2*((double)a));
            cout << "The equation have two real roots: " << endl
            << "x1 = " << x1solution << endl << "x2 = " << x2solution << endl;
        }
    }
    return 0;
}
