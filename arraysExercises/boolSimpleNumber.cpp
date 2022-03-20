//Create a program that reads a positive integer number a, a <= 100 and a row of integer positive numbers.
//shows odds numbers in row
//finds, first simple in row and cin >> its index
//if count of odds is equal of that index --> cin all odds number in that sequence

#include <iostream>
//#include "climits"
//#include <cmath>
using namespace std;

const int arrSize = 100;
int arr[arrSize], a;


void read_arr()
{
    for(int i = 0; i < a;i++)
        cin >> arr[i];
}
int count_odd()
{
    int b=0, i;
    for ( i = 0; i < a ; ++i) {
        if(arr[i] % 2) b++;

    }
    return b;
}
int simple(int x){
    int d;
    if(x == 0 || x == 1) return 0;
    for(d = 2;d <= x/2;d++)
        if(x%d==0)return 0;
    return 1;
}
int first_simple()
{
    int i, b;
    for (int i = 0; i < a ; ++i) {
        b = arr[i];
        if(simple(b)) return i;
    }
    return -1;
}

void showAllOdds(){
    for(int i = 0; i < a; i++)
    {
        if(arr[i] % 2 == 1) cout << arr[i] << " ";
    }
}



int main() {
    cin >> a;
    int odd, pr;
    read_arr();
    odd=count_odd();
    cout<<odd<<"\n";
    pr=first_simple();
    if (pr==-1){
        cout <<"The numbers are not simple: " << endl;
    }else {
        cout << pr << "\n";
    }
    if(odd == pr)  showAllOdds();

    return 0;
}