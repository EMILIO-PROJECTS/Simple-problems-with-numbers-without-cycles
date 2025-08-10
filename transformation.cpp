#include <iostream>
using namespace std;

int main() {


    float X, Y;

    cin >> X >> Y;

    
    float half_sum = (X + Y) / 2;

    if (X < Y) {
        X = half_sum;   
        Y = 2 * Y;   
    } else {
        Y = half_sum;    
        X = 2 * X;       
    }

    cout << X << " " << Y << endl;

    return 0;
}
