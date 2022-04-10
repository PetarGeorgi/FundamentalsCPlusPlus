//
// Created by Petar Georgiev on 23.3.2022 г..
//
//Write a program that changes each word in a text to start with a capital letter (don’t bother with the exact title-case rules about not capitalizing things like in, from, etc.).
//Assume the first letter of a word is an English alphabetical symbol preceded by a non-alphabetical symbol (so in "we will--rock you", "we", "will", "rock" and "you" are all considered words which need to be capitalized).
#include <iostream>
//Write a program that, given an integer number in the range [0, 9999], prints the name of that number in English.
//Simplifications:
// Use lowercase English letters only
// Don’t place "and" (e.g. 957 is nine hundred fifty-seven, NOT nine hundred and fifty-seven)
// Skip 0 digits, except for the number 0 (e.g. 0 -> zero; 101 -> one hundred one; 1001 -> one thousand one)
// Don’t print dashes (e.g. print 75 as seventy-five, NOT seventy-five)
//#include "climits"
//#include <cmath>
using namespace std;
void findTheThousandNumber (int x) { // thousandth
    int result = x / 1000;
    if(result > 0) {
        switch (result) {
            case 9 :
                cout << "nine thousand ";
                break;
            case 8 :
                cout << "eight thousand ";
                break;
            case 7 :
                cout << "seven thousand ";
                break;
            case 6 :
                cout << "six thousand ";
                break;
            case 5 :
                cout << "five thousand ";
                break;
            case 4 :
                cout << "four thousand ";
                break;
            case 3 :
                cout << "three thousand ";
                break;
            case 2 :
                cout << "two thousand ";
                break;
            case 1 :
                cout << "thousand ";
                break;

        }
    }else if(result == 0){ cout << "";}


}

void findTheHundredNumbers(int x) {
    x /= 100;
    if (x > 0) {
        switch (x) {
            case 9 :
                cout << "nine hundred ";
                break;
            case 8 :
                cout << "eight hundred ";
                break;
            case 7 :
                cout << "seven hundred ";
                break;
            case 6 :
                cout << "six hundred ";
                break;
            case 5 :
                cout << "five hundred ";
                break;
            case 4 :
                cout << "four hundred ";
                break;
            case 3 :
                cout << "three hundred ";
                break;
            case 2 :
                cout << "two hundred ";
                break;
            case 1 :
                cout << "one hundred ";
                break;
        }

    } else if (x == 0) { cout << ""; }
}
void findTheTensNumbers(int x) {
    int memoryX = x;
    x /= 10;
    if (x >= 2 && x <= 9) {
        switch (x) {
            case 9 :
                cout << "ninety ";
                break;
            case 8 :
                cout << "eighty ";
                break;
            case 7 :
                cout << "seventy ";
                break;
            case 6 :
                cout << "sixty ";
                break;
            case 5 :
                cout << "fifty ";
                break;
            case 4 :
                cout << "fourty ";
                break;
            case 3 :
                cout << "thirty ";
                break;
            case 2 :
                cout << "twenty ";
                break;
        }

    } else if (x == 1) {
        if(memoryX >= 11 && memoryX <= 12){
            if(memoryX == 11 ) cout << "eleven" << endl;
            else if(memoryX == 12) cout << "twelve" << endl;
        } else {
            memoryX %= 10;
            switch (memoryX) {
                case 9 :
                    cout << "nineteen";
                    break;
                case 8 :
                    cout << "eighteen";
                    break;
                case 7 :
                    cout << "seventeen";
                    break;
                case 6 :
                    cout << "sixteen";
                    break;
                case 5 :
                    cout << "fifteen";
                    break;
                case 4 :
                    cout << "fourteen";
                    break;
                case 3 :
                    cout << "thirteen";
                    break;
                default:
                    cout << "ten";
                    break;
            }
        }
    }
}
void findTheSmallNumbers(int x) {
    switch (x) {
        case 9 :
            cout << "nine";
            break;
        case 8 :
            cout << "eight";
            break;
        case 7 :
            cout << "seven";
            break;
        case 6 :
            cout << "six";
            break;
        case 5 :
            cout << "five";
            break;
        case 4 :
            cout << "four";
            break;
        case 3 :
            cout << "three";
            break;
        case 2 :
            cout << " two";
            break;
        case 1 :
            cout << "one";
            break;
        case 0:
            cout << "zero";
            break;
    }

}

//void print_each_digit(int x)
//{
//
//    if(x >= 10)
//        n++;
//        print_each_digit(x / 10);
//
//    int digit = x % 10;
//
//    std::cout << digit << '\n';
//}
int main() {
    int x;
    cin >> x;
    if(x == 0) {
        cout << "zero";
        return 0;
    }
    findTheThousandNumber(x);
    x %= 1000;
    if(x == 0) {
        return 0;
    }
    findTheHundredNumbers(x);
    x %= 100;
    if( x == 10){
        cout << "ten";
        return 0;
    }
    if(x == 0) {
        return 0;
    }
    findTheTensNumbers(x);

    if(x == 10 || x == 20 || x == 30 || x == 40 || x == 50 || x == 60 || x == 70 || x == 80 || x == 90 ){
        return 0;
    }
    if(x >= 11 && x <= 19){
        return 0;
    }
    x %= 10;
    findTheSmallNumbers(x);

    return 0;
}