#include <iostream>


using namespace std;

int main() {


    system("cls");

    float A, B, C, D;
    cin >> A >> B >> C >> D;


    if (D <= C && C <= B && B <= A) {  
        A = A;
        B = A;
        C = A;
        D = A;
    } else if (A < B && B < C && C < D) {

    } else {
        A = A * A;
        B = B * B;
        C = C * C;
        D = D * D;
    }

    cout << A << " " << B << " " << C << " " << D << endl;


}
