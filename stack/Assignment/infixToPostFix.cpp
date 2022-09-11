#include <iostream>
#include <string>
#include <stack>

using namespace std;
// const int size = 10;

int top = -1;

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
    string infix = "a+b*c";

    string postfix = "";
    char stack[20];

    int j = 0; // counter for postfix

    // looping through infix
    for (int i = 0; i < infix.length(); i++)
    {

        // if char is not an operator
        // it is an operand : number
        // postfix store
        if (isOperator(infix[i]) == 0)
        {
            postfix[j++] = infix[i];
        }

        // if char is an operator
        // stack store
        else

        {

            if (infix[i] == ')')
            {
                while (stack[top] != '(')
                {
                    postfix[j++] = stack[top--];
                }
            }
            // stack empty and after precedence >= previous precedence
            // condition pop preious operator if it has the same precedence as the next operator
            // condition pop preious operator if it has greater precedence than the next operator
            while (top != 0 && isOperator(infix[i] <= isOperator(stack[top])))
            {
                postfix[j++] = stack[top--];
            }
            stack[top++] = infix[i];
        }
    }

    // after infix expression is completed
    //  pop all the operators in stack and add them to postfix
    while (top > 0)
    {
        postfix[j++] = stack[top--];
    }

    postfix[j++] = '\0';

    printf("%s", postfix);

    cout << "Postfix == " << postfix;

    return 0;
}
