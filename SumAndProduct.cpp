#include <iostream>
using namespace std;

int main() {

    system("cls");

    
    int number;
    cin >> number;

    int leftDigit = number / 10;   
    int rightDigit = number % 10;   

    int sum = leftDigit + rightDigit;
    int product = leftDigit * rightDigit;

    cout << "Sum of the digits: " << sum << endl;
    cout << "Product of the digits: " << product << endl;

    return 0;
}