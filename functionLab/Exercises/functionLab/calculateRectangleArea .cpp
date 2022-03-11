//Create a function that calculates and returns the area of a rectangle by given width and height:

#include <iostream>
//#include "climits"
//#include <math.h>
using namespace std;
int calculateRectangleArea(int a, int b)
{
    int area = a * b;
    return area;
}
int main() {
    int x, y;
    cin >> x >> y;

   int area =  calculateRectangleArea(x, y)  ;
    cout << area;
    return 0;
}