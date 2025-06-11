#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int base, height;
    cin >> base >> height;
    
    double area = (base * height) / 2.0;
    cout << fixed << setprecision(1);
    cout << "Triangle area:" << area << endl;
    
    return 0;
}