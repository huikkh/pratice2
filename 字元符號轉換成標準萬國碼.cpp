#include <iostream>
using namespace std;

int main() {
    char character;
    while (cin >> character) {
        cout << static_cast<int>(character) << endl;
    }

    return 0;
}
