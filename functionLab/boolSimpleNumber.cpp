//Create a program that reads an integer number and finds simple  or not

#include <iostream>
//#include "climits"
//#include <cmath>
using namespace std;
int simple(int x){
    int d;
    if(x == 0 || x == 1) return 0;
    for(d = 2;d <= x/2;d++)
        if(x%d==0)return 0;
    return 1;
}

int main() {
    int n;
    cin >> n;
    int result = simple(n);
    if (result == 0){
        cout <<"The number is not simple: " << n;
    }else {
        cout <<"The number is simple: " << n;
    }

    return 0;
}