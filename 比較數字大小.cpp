#include <iostream> 
using namespace std;

int main(int argc, char *argv[]) {
    int num[3];
    cin >> num[0] >> num[1] >> num[2];

    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(num[i] < num[j]){
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    cout << num[0] << ">" << num[1] << ">" << num[2] << endl;

	return 0;
}