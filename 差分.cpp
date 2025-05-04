#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int num;
    cin >> num;

    int arr[201];
    for(int i = 0;i < num;i++){
        cin >> arr[i];
    }

    int ans[201];
    for(int i = 0;i < num;i++){
        if(i == 0){
            ans[i]=arr[i];
        }
        else{
            ans[i]=arr[i]-arr[i-1];
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