//
// Created by Petar Georgiev on 23.3.2022 г..
//
//Write a program that reads an array from the console and prints
//the product of each of its elements with all elements. E.g.
//for the array {1, 7, 3}, the result would be
//{1*1, 1*7, 1*3, 7*1, 7*7, 7*3, 3*1, 3*7, 3*3},
//which gives us the array
//{1, 7, 3, 7, 49, 21, 3, 21, 9},
//so for the input
//1 7 3,
//the program should print
//1 7 3 7 49 21 3 21 9.

#include <iostream>
#include <climits>

using namespace std;

int arr[100], n, maxInt;

void read_arr(){
    for (int i = 0; i < n ; ++i) {
        cin >> arr[i];
    }
}

int main()
{
    cin >> n;
    int result;
    read_arr();
    for (int a = 0; a < n; ++a) {
        for (int i = 0; i < n; ++i) {
            result = arr[a] * arr[i];
            cout << result << " ";
        }
    }
    return 0;
}