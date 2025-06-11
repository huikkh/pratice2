#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num;
    cin >> num;

    if(num <= 100 && num >= 90){
        cout << "A\n";
    }
    else if(num <= 89 && num >= 80){
        cout << "B\n";
    }
    else if(num <= 79 && num >= 70){
        cout << "C\n";
    }
    else if(num <= 69 && num >= 60){
        cout << "D\n";
    }
    else if(num <= 59 && num >= 0){
        cout << "E\n";
    }
    else{
        cout << "error\n";
    }

	return 0;
}