//Write a program that receives two integer numbers and one of the following four instructions (as a single symbol): +, -, *, / on the next line.
// The operations are as follows: + is addition, - is subtraction, * is multiplication, and / is division.
// Create four functions (for each operation) and call the right one depending on the command.
//The function should print:
// The calculated number
// "Can't divide by zero." - on certain conditions

#include <iostream>
//#include "climits"
//#include <math.h>
using namespace std;
double findTheClosestPointToTheCenter(double x, double y)
{
    int result;
    result = x * x + y * y;
    return result;
}
int main() {
    double x1, y1, x2, y2, p1, p2;
    cin >> x1 >> y1 >> x2 >> y2;

    p1 = findTheClosestPointToTheCenter(x1, y1);
    p2 = findTheClosestPointToTheCenter(x2, y2);

    if (p1 >= p2){
        cout << "(" << x2 << "," << " " << y2 << ")";
    }else {
        cout << "(" << x1 << "," << " " << y1 << ")";
    }

    return 0;
}