#include <iostream>
using namespace std;

int main() {

    system("cls");

    int number;

    cin >> number;

    int x = number / 10000;
    int y = (number / 1000) % 10;
    int z = (number / 100) % 10;
    int a = (number / 10) % 10;
    int b = number % 10;

    int sum_firsttwo = x + y;
    int sum_lasttwo = a + b;

    int difference = x + y - a - b;

    cout << difference << endl;

}