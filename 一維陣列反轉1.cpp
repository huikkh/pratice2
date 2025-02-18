#include <iostream>
using namespace std;

int main() {
    int array[100];
    int i = 0, a;

    while(cin >> a) {
        array[i] = a;
        i++;
    }

    for(int j = i - 1; j >= 0; j--) {
        if(j == 0) {
            cout << array[j];
        }
        else {
            cout << array[j] << " ";
        }
    }
    cout << endl;

    return 0;
}