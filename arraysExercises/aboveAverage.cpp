//
// Created by Petar Georgiev on 23.3.2022 г..
//
//Write a program that reads an array of integer numbers from the console and prints all numbers which are larger than or equal to the mathematical average of the numbers in the array.
//The output should be printed on a single line, separating the output number by spaces.
//The output numbers should be in the same order as they were in the input.
//© SoftUni – about.softuni.bg. Copyrighted document. Unauthorized copy, reproduction or use is not permitted.
//Follow us: Page 2 of 3
//The output array will be entered on two lines- the first line will contain an integer representing the number of elements,
//the second will contain the elements separated by spaces.

#include <iostream>
using namespace std;

int arr[100], n;
int averageVar = 0;

void read_arr()
{
    for(int i = 0; i < n;i++)
        cin >> arr[i];
}

int sumArrayElements(int a[], int sizeArr)
{
    int result = 0;
    for (int i = 0; i < sizeArr; ++i) {
        result += a[i];
    }

    return result;
}

//void printFindedSequence()
//{
//    int lastIndex = maxCountElement + firstIndex;
//    for (int j = firstIndex; j < lastIndex; ++j) {
//        cout << arr[j] << " ";
//    }
//}
//void write_arr(){
//    for (int i = 0; i < n ; ++i) {
//        cout << arr[i] << endl;
//    }
//}
void findNumbers(){
    for (int i = 0; i < n; ++i) {
        if(arr[i] >= averageVar)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    cin >> n;
    read_arr();

    int resArrSum = sumArrayElements(arr, n);
    averageVar = resArrSum / n;
    findNumbers();


    return 0;
}