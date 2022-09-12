#include <iostream>
#include <string>
#include <stack>
// #include <vector>
using namespace std;

int isOperator(char c)
{

    switch (c)
    {
    case '+':
        return 1;
        break;

    case '-':
        return 1;
        break;

    case '*':
        return 2;
        break;
    case '/':
        return 2;
        break;

    case '^':
        return 3;

    case '(':
        return 4;
        break;

    case ')':
        return 4;
        break;

    default:
        return 0;
    }
}

int main()
{
    // string exp = "a+b*(c^d-e)^(f+g*h)-i";
    string postfix = "562+*124/-";
    int stack[15];
    int top = -1;
    int pre1 = 0;
    int pre2 = 0;
    int result;

    for (int i = 0; i < postfix.length(); i++)
    {
        // if char is not an operator
        // it is an operand : number
        // stack store
        if (isOperator(postfix[i]) == 0)
        {
            stack[++top] = postfix[i];
        }

        else
        {
            // postfix[i] = operator
            pre1 = stack[top];
            pre2 = stack[--top];
            switch (postfix[i])
            {
            case '+':
                stack[top] = pre1 + pre2;
                break;

            case '-':
                stack[top] = pre1 - pre2;
                break;

            case '*':
                stack[top] = pre1 * pre2;
                break;

            case '/':
                stack[top] = pre1 / pre2;
                break;

            case '^':
                stack[top] = pre1 ^ pre2;
                break;
            default:
                break;
            }
        }
    }

    result = stack[top];
    cout << "Result = " << result; // ans should be 37

    return 0;
}
