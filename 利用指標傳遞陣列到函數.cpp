#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num[10];
    for(int i = 0;i < 10;i++){
        cin >> num[i];
    }

    for(int i = 9;i >= 0;i--){
        if(i == 0){
            cout << num[0];
        }
        else{
            cout << num[i] << " ";
        }
    }
    cout << endl;
    
	return 0;
}