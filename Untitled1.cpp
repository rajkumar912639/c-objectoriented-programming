#include <iostream>
#include <stack>
#include <string>

bool isParenthesisBalanced(const std::string& expression) {
    std::stack<char> parenthesesStack;

    for (char c : expression) {
        if (c == '(' || c == '{' || c == '[') {
            parenthesesStack.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (parenthesesStack.empty()) {
                return false; 
            }

            char top = parenthesesStack.top();
            parenthesesStack.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false; 
            }
        }
    }

    return parenthesesStack.empty(); 
}

int main() {
    std::string expression;
    std::cout << "Enter an expression: ";
    std::getline(std::cin, expression);

    if (isParenthesisBalanced(expression)) {
        std::cout << "Parentheses are balanced." << std::endl;
    } else {
        std::cout << "Parentheses are not balanced." << std::endl;
    }

    return 0;
}

