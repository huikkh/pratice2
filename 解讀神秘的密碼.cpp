#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[1000];
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);
    for (int i = len-1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;

}