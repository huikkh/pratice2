#include <iostream>
using namespace std;

int main() {
    int mile1;
    cin >> mile1;

    double km1 = mile1 * 1.6;

    cout << fixed;
    cout.precision(1);
    cout << km1 << endl;

    return 0;
}