#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    system("cls");

    float x, y, z;
    cin >> x >> y >> z;


    if (z >= y && y >= x) {
        x = x * 2;
        y = y * 2;
        z = z * 2;
     } else {
        x = (x < 0) ? -x : x;
        y = (y < 0) ? -y : y;
        z = (z < 0) ? -z : z;
    }

    cout << x << " " << y << " " << z << endl;

    return 0;
}
