#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int n, T;
    char p[11]; 

    cin >> n >> p >> T;   

    for (int i = 0; i < n; i++) {
        cout << p[i];
        
        if ((i + 1) % T == 0 && i != n - 1) {
            cout << " "; 
        }
    }
    cout << endl; 

	return 0;
}