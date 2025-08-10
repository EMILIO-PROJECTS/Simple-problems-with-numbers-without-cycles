#include <iostream>

using namespace std;

int main(){

    system("cls");

    int number;
    cin >> number;

    int x = number / 1000;
    int y = (number / 100) % 10;   

    cout << y << endl;
    
}