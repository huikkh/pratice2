#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    int score[n];
    for(int i = 0; i < n; i++){
        cin >> score[i];
    }

     for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(score[i] < score[j]){
                int temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
     }

     for(int i = 0; i < n; i++){
        cout << i+1 << " " << score[i] << endl;
     }


	return 0;
}