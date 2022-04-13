//Write a program that reads a line containing integer numbers, separated by spaces, and prints their sum.
//In addition to the numbers, each line will contain one or more words (sequences of English letters) –
//print those words on a separate line, separated by spaces, after the sum, in the order,
//they were in the input.

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;


int main() {

    string line;
    getline(cin, line);

    istringstream input(line);
    string current;

    ostringstream lettersOfStream;
    int sum = 0;

    while (input >> current){
        char c = current[0];

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            lettersOfStream << current << " ";
        else
        {
            int n = stoi(current);
            sum += n;
        }


    }

    cout << sum << endl;
    cout << lettersOfStream.str() << endl;
    return 0;
}