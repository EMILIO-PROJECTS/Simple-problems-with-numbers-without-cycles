#include <iostream>
using namespace std;

int main() {

    int number;

    cin >> number;

    int a = number / 1000;       
    int b = (number / 100) % 10;
    int c = (number / 10) % 10;   
    int d = number % 10;         


     int sum = a + b + c + d;


     if (sum % 2 == 0 && sum % 3 == 0) {
     cout << "Multiple of 2 and 3" << endl;
    } else {
        cout << "Not a Multiple of 2 and 3" << endl;
    }

}