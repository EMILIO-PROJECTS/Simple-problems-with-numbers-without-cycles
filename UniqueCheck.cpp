#include <iostream>
using namespace std;

int main() {

    system("cls");

    int number;

    cin >> number;

    int a = number / 1000;
    int b = (number / 100) % 10;
    int c = (number / 10) % 10;
    int d = number % 10;

    if (a == b || a == c || a == d || b == c || b == d || c == d) {
        cout << "Duplicate Digits Found" << endl;
    } else {
        cout << "All Digits are Different" << endl;
    }

}