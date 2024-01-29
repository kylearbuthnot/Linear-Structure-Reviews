#include <stack>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int evalRPN(vector<string>& tokens) {
    //first we will need a stack of integers and a stack of operands.
    stack<int> integers;
    stack<string> operands;
    //We need to run through our token vector and determine what we are looking at.
    for (int i = 0; i < tokens.size(); i++) {
        //determine if we are looking at a number or a operand.
        if (stoi(tokens[i])) {//if we are looking at a number, push it onto the integer stack and convert it to int.
            integers.push(stoi(tokens[i]));
        }
        else { //if not an int then we are looking at an operand and we need to push it onto the operand stack then do some checking.
            operands.push(tokens[i]);
            //if we have 2 numbers on the integer stack, we need to perform an operation.
            if (integers.size() >= 2) {
                int temp1 = integers.top();
                integers.pop();
                int temp2 = integers.top();
                integers.pop();
                //now we need to check what operand we are looking at and perform the appropriate operation.
                switch (operands.top()[0]) { //check the character at the top of the operand stack.
                case '+': //if its a plus, add the two numbers and push the result onto the integer stack.
					integers.push(temp1 + temp2);
                    operands.pop(); //pop the operand off the stack.
					break;
                case '-': //if its a minus, subtract the two numbers and push the result onto the integer stack.
                    integers.push(temp1 - temp2);
                    operands.pop(); //pop the operand off the stack.
                    break;
                case '*': //if its a multiply, multiply the two numbers and push the result onto the integer stack.
                    integers.push(temp1 * temp2);
                    operands.pop(); //pop the operand off the stack.
                    break;
                case '/': //if its a divide, divide the two numbers and push the result onto the integer stack.
                    integers.push(temp1 / temp2);
                    operands.pop(); //pop the operand off the stack.
                    break;
                }
            }
        }
    }
    return integers.top();//return the top and final value on the integer stack.
}

    bool isValid(string s) {
        stack<char> sChar; //we have a stack schar to hold the characters we've used.
        for (int i = 0; i < s.length(); i++) { //for loop to iterator through the given string.
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') { //if we are looking at any of the opening left brackets, push it to the stack.
                sChar.push(s[i]); //push the char to the stack.
            }
            else {//otherwise we have a closing parenthesis and we need to check and see if we have an appropriate matching one on top of the stack. If we do, pop it off and break.
                switch (s[i]) { //if not, we know the parentheses aren't valid so return false.
                case ')':
                    if (sChar.top() == '(') { //if we have ( on top of the stack, pop it off and break)
                        sChar.pop();
                        break;
                    }
                    else { //otherwise return false.
                        return false;
                    }
                case ']':
                    if (sChar.top() == '[') { //if we have [ on top of the stack, pop it off and break)
                        sChar.pop();
                        break;
                    }
                    else { //otherwise return false.
                        return false;
                    }
                case '}':
                    if (sChar.top() == '{') { //if we have { on top of the stack, pop it off and break)
                        sChar.pop();
                        break;
                    }
                    else { //otherwise return false.
                        return false;
                    }
                }
            }
        }
        if (sChar.empty()) {
            return true;
        }
        else {
            return false;
        }

    }
    

    int main() {
        
        vector<string> testCase = { "2", "1", "+", "3", "*" };
        cout << evalRPN(testCase) << endl;

		return 0;
    }