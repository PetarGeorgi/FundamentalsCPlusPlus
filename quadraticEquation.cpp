//Write a program that enters the coefficients a, b, and c of a quadratic equation a*x2 + b*x + c = 0
//        and calculates and prints its real roots.Note that quadratic equations may have 0, 1, or 2 real roots. You can check your program against this:
//https://www.mathsisfun.com/quadratic-equation-solver.html
//The numbers a, b, and c will be entered on a single line from the console, separated by spaces.
//If the quadratic equation has no real roots (e.g. if the Discriminant is less than 0), print "no roots",
//if it has one real root print it, if it has two roots, print them on a single line, separated by a single space
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b * b - 4 * a * c;
    double d1, d2;
    if (d >= 0) {
        if(d == 0){
            d1 = - b / (2 * a);
            cout << d1;
            return 0;
        }
         d1 = (-b + sqrt(d)) / (2 * a);
         d2 = (-b - sqrt(d)) / (2 * a);
         cout << d1 << " " << d2;
    }
    else
        {
        cout<<"no roots";
        return 0;
        }


        return 0;
    }


