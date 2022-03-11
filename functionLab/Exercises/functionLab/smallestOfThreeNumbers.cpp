//Write a function to print the smallest of three integer numbers. Use an appropriate name for the function.

#include <iostream>
//#include "climits"
//#include <math.h>
using namespace std;
void findTheSmallestNumber(int x, int y, int c)
{
  if(x < y || x < c)
  {
      cout << x;
  }
  else if(x > y || y < c)
  {
      cout << y;
  }
  else {
      cout << c;
  }
}
int main() {
int x, y, c;
cin >> x >> y >> c;

findTheSmallestNumber(x, y, c);


        return 0;
    }


