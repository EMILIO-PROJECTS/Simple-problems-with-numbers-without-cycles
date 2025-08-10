#include <iostream>
using namespace std;

int main() {

    system("cls");

    
    int x, y;
    cin >> x >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << x << " " << y << endl;

    return 0;
}
