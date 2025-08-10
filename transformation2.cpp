#include <iostream>


using namespace std;

int main() {


    system("cls");

    float X, Y;
    cin >> X >> Y;

    if (X < 0 && Y < 0) {
        if (X < 0) X = -X;
        if (Y < 0) Y = -Y;
    }
    else if ((X < 0 && Y >= 0) || (X >= 0 && Y < 0)) {
        X = X + 0.5;
        Y = Y + 0.5;
    } else {
        if (!((X >= 0.5 && X <= 2.0) || (Y >= 0.5 && Y <= 2.0))) {
            X = X / 10;
            Y = Y / 10;
        }
       
    }

    cout << X << " " << Y << endl;

}
