#include <iostream>
#include <cmath>

using namespace std;

int main() {

    system ("cls");

    int number;

    cin >> number;


    int a = number / 1000;       
    int b = (number / 100) % 10;  
    int c = (number / 10) % 10;  
    int d = number % 10;


    int sum = pow(a, 4) + pow(b, 4) + pow(c, 4) + pow(d, 4);


    if (sum == number) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not Armstrong Number" << endl;
    }

}
