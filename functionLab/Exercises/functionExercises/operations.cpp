//Write a program that receives two integer numbers and one of the following
//four instructions (as a single symbol): +, -, *, / on the next line.
//The operations are as follows: + is addition, - is subtraction, * is multiplication,
//and / is division. Create four functions (for each operation) and call the right one depending on the command.
//The function should print:
// The calculated number
// "Can't divide by zero." - on certain conditions

#include <iostream>
//#include "climits"
//#include <math.h>
using namespace std;
void makeCalculation(double x, double y, char a)
{
    if (a == '+')
    {
        cout << x + y << endl;

    }
    else if (a == '-')
    {
        cout << x - y << endl;

    }
    else if (a == '*')
    {
        cout << x * y << endl;

    }
    else if (a == '/')
    {
        if ( y == 0) {
            cout << "Can't divide by zero.";
        }
        else {
            cout << x / y << endl;
        }

    }
}

int main() {
    double x1, y1;
    cin >> x1 >> y1;
    char a;
    cin >> a;

    makeCalculation(x1, y1, a);

    return 0;
}

