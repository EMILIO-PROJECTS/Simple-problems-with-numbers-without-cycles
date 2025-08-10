#include <iostream>


using namespace std;

int main() {


    system("cls");

    int A, B, R, S;

    cin >> A >> B >> R >> S;


    int remainder = A % B;


    if (remainder == R || remainder == S) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}
