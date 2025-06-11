#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int num;
    cin >> num;

    int first, second, last;
    for(int i = 0; i < num; i++){
        cin >> first >> second >> last;
        
        if(first >= 60 && second >= 60 && last >= 60){
            cout << "P" << endl;
        }
        else if((first + second + last >= 220) && 
                ((first >= 60 && second >= 60 && last < 60) || 
                 (first >= 60 && second < 60 && last >= 60) || 
                 (first < 60 && second >= 60 && last >= 60))){
            cout << "P" << endl;
        }
        else if((first + second + last < 220) && 
                ((first >= 60 && second >= 60 && last < 60) || 
                 (first >= 60 && second < 60 && last >= 60) || 
                 (first < 60 && second >= 60 && last >= 60))){
            cout << "M" << endl;
        }
        else if((first >= 80 && second < 60 && last < 60) || 
                (first < 60 && second >= 80 && last < 60) || 
                (first < 60 && second < 60 && last >= 80)){
            cout << "M" << endl;
        }
        else{
            cout << "F" << endl;
        }
    }

    return 0;
}
