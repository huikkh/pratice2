#include <iostream>
using namespace std;

int triple(int num){
    int temp=1;
    for(int i=0;i<3;i++){
        temp*=num;
    }
    return temp;
}

int main(int argc, char *argv[]) {
    int arr[6];
    for(int i=0;i<6;i++){
        cin >> arr[i];
        arr[i] = triple(arr[i]);
    }

    long long ans = 0;
    for(int i=0;i<6;i++){
        ans += arr[i];
    }
    cout << ans << endl;

	return 0;
}