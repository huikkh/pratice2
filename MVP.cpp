#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int ans = num1 + 2 * (num3 + num2 + num4 - num5);

    if(ans > 45){
        cout << "A" << endl;
    }
    else if(ans <= 44 && ans >= 35){
        cout << "B" << endl;
    }
    else if(ans <= 34 && ans >= 25){
        cout << "C" << endl;
    }
    else if(ans < 25){
        cout << "D" << endl;
    }

    return 0;
}