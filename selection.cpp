#include <iostream>


using namespace std;

int main() {


    system("cls");

    float A, B, C;
    cin >> A >> B >> C;

    bool light = false;

    if (A > 1 && A < 3) {
        cout << A;
        light = true;
    }

    if (B > 1 && B < 3) {
        if (light) cout << " ";
        cout << B;
        light = true;
    }

    if (C > 1 && C < 3) {
        if (light) cout << " ";
        cout << C;
        light = true;
    }

    if (!light) cout << "No Numbers Found";

    cout << endl;
}
