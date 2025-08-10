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

        if (x == y || x == z || x == a || x == b || y == z || y == a || y == b || z == a || z == b || a == b) {
        cout << "Identical Digits Found" << endl;
    } else {
        cout << "No Identical Digits" << endl;
    }

}