//
// Created by penet on 22.3.2022 г..
//
//Write a program that finds the longest sequence of equal elements in an integer array and then prints that sequence on the console
//(integers separated by space on a single line). If there is more than one such sequence, print the last one. The input array will be entered on two lines – the first line will contain an integer representing the number of elements,
//the second will contain the elements separated by spaces.
#include <iostream>
using namespace std;

int arr[100], n, count, i, firstIndex;
bool a = false;
int firstI = 0;
int maxCountElement = 1;
void read_arr()
{
    for(int i = 0; i < n;i++)
        cin >> arr[i];
}

void findTheLongestEqualsSequence()
{
    count = 1;
    for ( i = 0; i < n; ++i) {
        //check the end of sequence
        if(i == n){
//            if(count < 1)
//            {
//                break;
//            }
            break;
        }
        //count equals elements
        if(arr[i] == arr[i+1])
        {
            count++;
            if(!a)firstI = i;
            a = true;
            if(maxCountElement < count){
                maxCountElement = count;
            }
            if(a) firstIndex = firstI; //the beginning of the sequence
        }else{
            if(count > 1) count = 1;
            a = false;
        }



    }
    if(i == n && maxCountElement == 1) //if there is not any sequences print last element
    {
        cout << arr[n -1] << endl;
    }else{

//    cout << maxCountElement;
    }
}
void printFindedSequence()
{
    int lastIndex = maxCountElement + firstIndex;
    for (int j = firstIndex; j < lastIndex; ++j) {
        cout << arr[j] << " ";
    }
}
//void write_arr(){
//    for (int i = 0; i < n ; ++i) {
//        cout << arr[i] << endl;
//    }
//}

int main()
{
    cin >> n;
    read_arr();
//    write_arr();
    findTheLongestEqualsSequence();
    if(maxCountElement > 1)
    {
    printFindedSequence();
    }
    return 0;
}