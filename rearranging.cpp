#include <iostream>
using namespace std;

int main() {

    system("cls");


    int number;
    cin >> number;

    int leftDigit = number / 10;
    int rightDigit = number % 10; 

    int x = rightDigit * 10 + leftDigit;

    cout << x << endl;

    return 0;
}
