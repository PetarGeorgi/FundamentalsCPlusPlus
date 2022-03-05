//Write a program that reads two integers from the console and prints them in increasing order.
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 > n2) {
        cout << n2 << " " << n1;
    } else
    {
        cout << n1 <<" "<< n2;
    }

    return 0;
}


