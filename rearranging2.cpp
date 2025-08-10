#include <iostream>

using namespace std;

int main(){

    system("cls");

    int number;
    cin >> number;

    int x = number / 100;
    int y = (number / 10) % 10;        
    int z = number % 10;   

    cout << y << x << z << endl;
    
}