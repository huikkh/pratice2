#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int freq[26] = {0}; 
    string str;
    
    getline(cin, str);  // 讀入整行字串
    
    for (char ch : str) {
        if (isalpha(ch)) {
            freq[tolower(ch) - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i) {
        cout << freq[i];
        if (i < 25) cout << " ";
    }
    cout << endl;

    return 0;
}

