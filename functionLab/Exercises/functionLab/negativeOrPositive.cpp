//Create a function that prints the sign of an integer number n:

#include <iostream>
#include "climits"
using namespace std;
void whatIsTheNumberSign(int n)
{
    if(n > 0){
        cout << "The number " << n << " is positive.";
    }else if(n < 0){
        cout <<"The number "  << n << " is negative.";
    }else{
        cout << "The number " << n << " is zero.";
    }
}
int main() {
    int num;
    cin >> num;

    whatIsTheNumberSign( num);


        return 0;
    }


