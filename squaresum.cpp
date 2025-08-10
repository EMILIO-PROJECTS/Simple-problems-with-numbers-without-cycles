#include <iostream>
#include <cmath>
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


    int sum = pow(x, 2) + pow(y, 2) + pow(z, 2) + pow(a, 2) + pow(b, 2);


    cout << sum << endl;

}