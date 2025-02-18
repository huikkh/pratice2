#include <iostream>
using namespace std;

int main() {
    int array[6];
    for(int i = 0; i < 6; i++) {
        cin >> array[i];
    }

    for(int i = 5; i >= 0; i--) {
        if(i == 0) {
            cout << array[i];
        }
        else {
            cout << array[i] << " ";
        }
    }
    cout << endl;

    return 0;
}