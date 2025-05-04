#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num[6];
    for(int i = 0;i < 6;i++){
        cin >> num[i];
    }
    int ans = 0;
    for(int i = 0;i < 6;i++){
        ans+=(num[i]*num[i]);
    }
    cout << ans << endl;




	return 0;
}