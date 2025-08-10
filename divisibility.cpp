#include <iostream>
using namespace std;

int main() {

    int number;

    cin >> number;

    int a = number / 1000;       
    int b = (number / 100) % 10;
    int c = (number / 10) % 10;   
    int d = number % 10;         


     if (a != 0 && b != 0 && c != 0 && d != 0 && number % a == 0 && number % b == 0 && number % c == 0 && number % d == 0) {
     cout << "Divisible by All Digits" << endl;
    } else {
        cout << "Not Divisible by All Digits" << endl;
    }

}