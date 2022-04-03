//Write a program that changes each word in a text to start with a capital letter
//(don’t bother with the exact title-case rules about not capitalizing things like in, from, etc.).
//Assume the first letter of a word is an English alphabetical symbol preceded by a non-alphabetical symbol
//(so in "we will--rock you", "we", "will", "rock" and "you" are all considered words which need to be capitalized).

#include <iostream>
#include <string>


using namespace std;

string capitalizeFirstLetter(string text) {

    for (int x = 0; x < text.length(); x++) {
        if (x == 0) {
            text[x] = toupper(text[x]);
        } else if (text[x - 1] == ' ') {
            text[x] = toupper(text[x]);
        } else if (text[x - 1] == ',') {
            text[x] = toupper(text[x]);
        } else if (text[x - 1] == '-') {
            text[x] = toupper(text[x]);
        }
    }
    return text;
}

// Driver code
int main()
{
    string line;
    //take the input
    getline(cin, line);
    cout << capitalizeFirstLetter(line);
    return 0;
}
