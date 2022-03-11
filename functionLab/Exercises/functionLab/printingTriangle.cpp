//Create a function for printing triangles as shown below:

#include <iostream>
//#include "climits"
//#include <math.h>
using namespace std;
void createTriangles(int x)
{
    for (int i = 0; i < x + 1; ++i) {
        for (int j = 1; j < i + 1; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = x; i >= 1; --i) {
        for (int j = 1; j < i  ; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main() {
    int x;
    cin >> x;

    createTriangles(x)  ;

    return 0;
}