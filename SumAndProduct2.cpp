#include <iostream>
using namespace std;

int main() {

    system("cls");

    int number;
    cin >> number;

    int x = number / 100;
    int y = (number / 10) % 10;        
    int z = number % 10;              

    int sum = x + y + z;     
    int product = x * y * z;

    cout << "Sum of the digits: " << sum << endl;
    cout << "Product of the digits: " << product << endl;

    return 0;
}
