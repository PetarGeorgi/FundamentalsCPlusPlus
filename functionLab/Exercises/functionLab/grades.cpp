//Write a function that receives a grade between 2.00 and 6.00 and prints the corresponding grade in words
// 2.00 – 2.99 - "Fail"
// 3.00 – 3.49 - "Poor"
// 3.50 – 4.49 - "Good"
// 4.50 – 5.49 - "Very good"
// 5.50 – 6.00 - "Excellent"


#include <iostream>
//#include "climits"
//#include <math.h>
using namespace std;
void findTheGrade(double x)
{
  if(x >= 2.00 && x <= 2.99)
  {
    cout << "Fail" << endl;
  }
  else if(x >= 3.00 && x <= 3.49)
  {
      cout << "Poor" << endl;
  }
  else if(x >= 3.50 && x <= 4.49)
  {
      cout << "Good" << endl;
  }
  else if(x >= 4.50 && x <= 5.49)
  {
      cout << "Very good" << endl;
  }
  else if (x >= 5.50 && x <= 6.00)
  {
      cout << "Excellent" << endl;
  }
}
int main() {
double x;
cin >> x;

findTheGrade(x);


        return 0;
    }


