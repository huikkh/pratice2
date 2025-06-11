#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    if(n > 0){
        cout << "正數\n";
    }
    else if(n == 0){
        cout << "0\n";
    }
    else if(n < 0){
        cout << "負數\n";
    }




	return 0;
}