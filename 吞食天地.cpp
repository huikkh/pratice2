#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num;
    cin >> num;

    int arr[101];
    for(int i = 0;i < num;i++){
        cin >> arr[i];
    }

    int first,last;
    cin >> first >> last;

    int ans = 0;
    for(int i = first - 1;i < last;i++){
        ans+=arr[i];
    }

    cout << ans << endl;

	return 0;
}