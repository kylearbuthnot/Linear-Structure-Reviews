#include <iostream>
#include <stack>

using namespace std;

//Function to determine if parenthesis are valid. 
bool isValid(string s) {
    //stack to help with determining the validity.
    stack<char> sChar;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            sChar.push(s[i]);
        }
        else if (s[i] == ')') {
            if (sChar.empty()) {
				return false;
			}
            else {
                sChar.pop();
            }
        }
    }

    //If the stack is empty, then the parenthesis are valid. Otherwise return false.
    if (sChar.empty()) {
        return true;
    }
    return false;
}

int main() {
    //string to test with.
    string myString = ")(";//false
    cout << isValid(myString) << endl;
    string myString2 = "((())";//false
    cout << isValid(myString2) << endl;
    string myString3 = "()";//true
    cout << isValid(myString3) << endl;
    string myString4 = "(a)((b)((c)(d)))";//true
    cout << isValid(myString4) << endl;
    

    return 0;
}