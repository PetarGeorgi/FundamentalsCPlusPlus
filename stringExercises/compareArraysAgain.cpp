//
// Created by Petar Georgiev on 23.3.2022 г..
//
//Write a program that reads two integer arrays from the console and compares them element by element. For better code reusability, you could do the comparison in a function, which returns true if they are equal and false if not.
//Each array will be defined by a single line on the console, containing the numbers in the array, separated by spaces.
//Print equal if the arrays match, and not equal if the arrays don’t match.
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;


int main()
{
    string line1, line2;
    ostringstream stream3;

    getline(cin, line1);
    istringstream stream1(line1);

    getline(cin, line2);
    istringstream stream2(line2);
    int currentNumber1;
    vector<int>arr1;
    while(stream1 >> currentNumber1){
        arr1.push_back(currentNumber1);
    }

    int currentNumber2;
    vector<int>arr2;
    while(stream2 >> currentNumber2){
        arr2.push_back(currentNumber2);
    }

//    for(const auto &i : arr1)
//        cout << i;
//    cout << endl;
//    for(const auto &i : arr2)
//        cout << i ;

    arr1 == arr2 ? cout << "equal" : cout << " not equal";


    return 0;
}