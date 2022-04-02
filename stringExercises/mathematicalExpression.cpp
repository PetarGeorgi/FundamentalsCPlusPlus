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
string line1;
int count, count1;
istringstream stream1;

bool findThePairBrackets(istringstream &str1){
    getline(cin, line1);
    istringstream str(line1);

    int foundIndex = line1.find("(");
    count = 1;
    while (foundIndex != string::npos) {

        foundIndex =line1.find("(", foundIndex + 1);
        count++;
    }
    int foundIndex1 = line1.find(")");
    count1 = 1;
    while (foundIndex1 != string::npos) {

        foundIndex1 =line1.find(")", foundIndex1 + 1);
        count1++;
    }
    if(count == count1) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    bool x = findThePairBrackets(stream1);
    x ? cout << "correct" : cout << "incorrect";
//    for(const auto &i : arr1)
//        cout << i;
//    cout << endl;
//    for(const auto &i : arr2)
//        cout << i ;




    return 0;
}