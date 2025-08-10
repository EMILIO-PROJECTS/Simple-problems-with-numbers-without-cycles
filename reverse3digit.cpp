#include <iostream>
using namespace std;

int main() {

    system("cls");

    int xyz;
    cin >> xyz;

    int x = xyz / 100;           
    int y = (xyz / 10) % 10;     
    int z = xyz % 10;            

    cout << z << y << x << endl; 

    return 0;
}
