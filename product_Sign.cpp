//Write a program that shows the sign (+ or -) of the product of three real numbers without calculating it.
//The program should read 3 real numbers from the console (on a single line, separated by spaces) and should print the sign of their product (i.e. the sign of the number resulting from the multiplication of the 3 numbers).
//If the product is 0, print +.
#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    double result = n1 * n2 * n3;
    if (result >= 0)
    {
        cout << "+" ;
    } else
    {
        cout << "-";
    }

    return 0;
}


