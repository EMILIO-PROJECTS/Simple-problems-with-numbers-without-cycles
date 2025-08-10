#include <iostream>
using namespace std;

int main() {
    
    system("cls");

    int number;
    cin >> number;

    int leftDigit = number / 10;   
    int rightDigit = number % 10;  

    cout << "Left digit: " << leftDigit << endl;
    cout << "Right digit: " << rightDigit << endl;

    return 0;
}