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

int convertToInt(char c)
{

    switch (c)
    {
    case '1':
        return 1;
        break;

    case '2':
        return 2;
        break;

    case '3':
        return 3;
        break;
    case '4':
        return 4;
        break;

    case '5':
        return 5;

    case '6':
        return 6;
        break;

    case '7':
        return 7;
        break;

    case '8':
        return 8;
        break;

    case '9':
        return 9;
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
            cout << "line a postfix[i] = " << postfix[i] << endl;

            stack[++top] = convertToInt(postfix[i]);
            cout << " line a stack[top] = " << stack[top] << endl;
        }

        else
        {
            // postfix[i] = operator
            pre1 = stack[top];
            pre2 = stack[--top];
            cout << " pre1 = " << pre1 << endl;
            cout << " pre2 = " << pre2 << endl;

            cout << " postfix[i] = " << postfix[i] << endl;
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

            cout << " stack[top] = " << stack[top] << endl;

            // while (top != -1)
            // {
            //     cout << " stack[top] = " << stack[--top] << endl;
            // }
        }
    }

    result = stack[top];
    cout << "Result = " << result; // ans should be 37

    return 0;
}
