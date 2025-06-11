#include <iostream>
using namespace std;

void encrypt(int number) {
    int digits[4];

    for (int i = 3; i >= 0; i--) {
        digits[i] = number % 10;
        number /= 10;
    }

    for (int i = 0; i < 4; i++) {
        digits[i] = (digits[i] + 7) % 10;
    }

    int temp;
    temp = digits[0];
    digits[0] = digits[2];
    digits[2] = temp;

    temp = digits[1];
    digits[1] = digits[3];
    digits[3] = temp;

    for (int i = 0; i < 4; i++) {
        cout << digits[i];
    }
    cout << endl;
}

int main() {
    int number;
    cin >> number;

    encrypt(number);

    return 0;
}
