#include <iostream>
#include <stack>
#include <string>

using namespace std;

 
bool isValid(string s) {
    //stack to help with determining the validity.
    stack<char> sChar;
    //go over the entire string. (any character that isn't ( or ) is ignored.
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') { //if we see a '(' push it to the stack.
            sChar.push(s[i]);
        }
        else if (s[i] == ')') { //if we see a ')' and the stack is empty, parenthesis is invalid so return false.
            if (sChar.empty()) {
                return false;
            }
            else { //other wise pop the top of the stack which should be a '('
                sChar.pop();
            }
        }
    }
    //If the stack is empty, then the parenthesis are valid and return true, otherwise return false.
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

    string str = "(a)((buvv)aa((c)(d)))";
    stack<int> s;
    for (int i = 0; i < str.length(); i++) {
        switch (str[i]) {
        case '(':
            s.push(str[i]);
            break;

        case ')':
            if (!s.empty()) {
                s.pop();
            }
            else {
                cout << "empty";
                return 0;
            }
            break;

        }
    }

    if (s.empty()) {
        cout << "valid";
    }
    else
    {
        cout << "invalid";
    }

    return 0;
}