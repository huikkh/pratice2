#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int integer[201];
    for(int i = 0;i < num;i++){
        cin >> integer[i];
    }
    int ans[201];
    for(int i = 0;i < num;i++){
        if(i == 0){
            ans[i] = integer[i];
        }
        else{
            ans[i] = ans[i-1] + integer[i];
        }
    }
    for(int i = 0;i < num;i++){
        if(i == num-1){
            cout << ans[i];
        }
        else{
            cout << ans[i] << " ";
        }
    }
    cout << endl;



	return 0;
}