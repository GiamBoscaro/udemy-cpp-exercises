#include <iostream>
#include <string>

using namespace std;


int main() {
    
    cout << "Enter your string: ";
    string s {};
    getline(cin, s);
    cout << endl;
    
    for(size_t i = 0; i < s.length(); i++) {
        string whiteSpaces (s.length() - (i+1), ' ');
        string leftSide {s, 0, i+1};
        string rightSide = leftSide.substr(0, leftSide.length() -1);
        string actualRightSide {};
        for(char r: rightSide) {
            actualRightSide = r + actualRightSide;
        }
        cout << whiteSpaces + leftSide + actualRightSide << endl;
    }
    
    return 0;
}

