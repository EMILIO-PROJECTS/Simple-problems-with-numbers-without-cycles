#include <iostream>
using namespace std;

int main() {
    
    system("cls");

    int number;
    cin >> number;

    int x = number % 10;           
    int y = (number / 10) % 10;     

    cout << "Last digit (units): " << x << endl;
    cout << "Middle digit (tens): " << y << endl;

    return 0;
}
