#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) {
    string check; 

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            check += c; 
        } else {
            if (check.empty()) return false;

            char last = check.back(); 
            check.pop_back();        

            if ((c == ')' && last != '(') ||
                (c == '}' && last != '{') ||
                (c == ']' && last != '[')) {
                return false;
            }
        }
    }
    return check.empty();
}

int main() {
    string s = "()[]{}";
    cout << (isValid(s) ? "true" : "false") << endl;
    return 0;
}