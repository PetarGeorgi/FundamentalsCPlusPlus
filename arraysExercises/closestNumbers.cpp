//
// Created by Petar Georgiev on 23.3.2022 г..
//
///Write a program that finds the two closest (by value)
/// integer numbers in an array and prints the absolute difference
/// between them.

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
    int minResult = INT_MAX;
    read_arr();
    for (int a = 0; a < n - 1; ++a) {
        result = abs(arr[a] - arr[a +1]);
        if(result < INT_MAX) minResult = result;

    }
    if( minResult > abs(arr[0] - arr[n - 1])) {
        result = arr[0] - arr[n - 1];
    }
    cout << abs(result);
    return 0;
}