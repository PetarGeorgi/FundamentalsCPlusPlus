//Write a program that reads an integer number N, then reads a line of N integers, and prints the minimum and maximum of those integers.

#include <iostream>
#include "climits"
using namespace std;

int main() {
    int numbers, numMin = INT_MAX, numMax = INT_MIN, num;
    cin >> numbers;

    for (int i = 1; i <= numbers; ++i) {
        cin >> num;
        if(num > numMax)
        {numMax = num;}
        if(num < numMin)
        {
            numMin = num;
        }
    }
    cout << numMin << " " << numMax;


        return 0;
    }


