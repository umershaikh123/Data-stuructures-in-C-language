

#include <iostream>
#include <string>
#include <stack>
using namespace std;
// const int size = 10;
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
    // string infix = "((A+B)-C*(D/E))+F";
    string infix = "(A+B)*(C+D) ";
    // string infix = "A+B*C";
    // ABC
    // +*
    string postfix = "                       ";
    char *stack = new char[25];
    int top = -1;
    int j = 0; // counter for postfix

    // looping through infix
    for (int i = 0; i < infix.length(); i++)
    {
        // if char is not an operator
        // it is an operand : number
        // postfix store

        cout << "\n infix == "
             << infix[i];

        if (infix[i] == '(')
        {
            stack[++top] = '(';
            continue;
        }

        if (infix[i] == ')')
        {

            while (stack[top] != '(')
            {

                postfix[j++] = stack[top--];
            }
            top++;
            continue;
        }

        if (isOperator(infix[i]) == 0)
        {
            // cout << " infix at line 55 = " << infix[i] << endl;
            postfix[j++] = infix[i];
        }
        // if char is an operator
        // stack store
        else
        {

            if (stack[top] == '(' || top == -1)
            {
                stack[++top] = infix[i];
                continue;
            }

            // stack empty and after precedence >= previous precedence
            // condition pop preious operator if it has the same precedence as the next operator
            // condition pop preious operator if it has greater precedence than the next operator

            while (top != -1 && isOperator(infix[i]) <= isOperator(stack[top]))
            {
                postfix[j++] = stack[top--];
            }

            stack[++top] = infix[i];
        }

        cout << "\n Postfix == "
             << postfix;
        cout << "\n stack == "
             << stack[top] << endl;
        cout << "\n";
    }

    cout << "\n END "
         << endl;

    // after infix expression is completed
    //  pop all the operators in stack and add them to postfix

    while (top > 0)
    {
        cout << "\n stack == "
             << stack[top--] << endl;
    }

       postfix[j++] = '\0';

    return 0;
}
