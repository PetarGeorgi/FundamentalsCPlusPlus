//Create a function that calculates and returns the value of a number raised to a given power:

#include <iostream>
//#include "climits"
//#include <math.h>
using namespace std;
int calculateMathPower(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; ++i) {
        result *= a;
    }
    return result;
}
int main() {
    int x, y;
    cin >> x >> y;

   int mPower = calculateMathPower(x,y);
    cout << mPower;
    return 0;
}