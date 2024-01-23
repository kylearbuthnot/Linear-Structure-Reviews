#include <iostream>
#include <stack>

using namespace std;

//Function to determine if parenthesis are valid. 
bool isValid(string s) {
        //stack to help with determining the validity.
        stack<char> sChar;
        for(int i = 0; i < s.size(); i++){
            sChar.push(s[i]);
        }
        if(sChar.empty()){
            return true;
        }
        return false;
    }

int main() {
    //string to test with.
    string myString = "()()";
    cout << "Breakpoint hit..";
    //Test the string.
    if(isValid(myString)){
        cout << myString << " is a valid string of parenthesis.";
    }

    return 0;
}
