#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char *argv[]) {
    int x, y;
    cin >> x >> y;

    int a = pow(x, 2);
    int b = pow(y, 2);

    if(a + b <= 10000){
        cout << "inside\n";
    }
    else{
        cout << "outside\n";
    }


	return 0;
}