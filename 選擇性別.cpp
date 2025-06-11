#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    char letter;
    cin >> letter;

    if(letter == 'E'){
        cout << "ByeBye\n";
    }
    else if(letter == 'M'){
        cout << "Male\n";
    }
    else{
        cout << "Female\n";
    }

	return 0;
}