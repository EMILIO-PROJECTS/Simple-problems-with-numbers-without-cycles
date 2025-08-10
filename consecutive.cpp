#include <iostream>

using namespace std;

int main(){

    system("cls");

    int number;
    cin >> number;


    int a = number / 1000;
    int b = (number / 100) % 10;
    int c = (number / 10) % 10;
    int d = number % 10;

    if ((a == 3 && b == 7) || (b == 3 && c == 7) || (c == 3 && d == 7)) {
        cout << "Consecutive Digits Found" << endl;
    } else {
        cout << "Consecutive Digits Not Found" << endl;
    }

}