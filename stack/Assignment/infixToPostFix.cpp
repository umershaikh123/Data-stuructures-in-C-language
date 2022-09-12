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
    string infix = "A+B*C";

    string postfix = "       ";
    char stack[20];
    int top = -1;
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
            while (top != 0 && isOperator(infix[i]) <= isOperator(stack[top]))
            {
                postfix[j++] = stack[top--];
            }
            stack[top++] = infix[i];
        }
        cout << "\n Postfix == \n"
             << postfix;

        cout << "\n infix == \n"
             << infix[i];
        cout << "\n stack == \n"
             << stack[i];
    }

    // after infix expression is completed
    //  pop all the operators in stack and add them to postfix
    while (top > 0)
    {
        postfix[j++] = stack[top--];
        cout << "\n Postfix == \n"
             << postfix;
    }

    postfix[j++] = '\0';

    cout << "\n Postfix == \n"
         << postfix;

    return 0;
}


/*

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
    string infix = "((A+B)–C*(D/E))+F";
    // ABC
    // +*
    string postfix = "        ";
    char *stack = new char[20];
    int top = -1;
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
            while (top != 0 && isOperator(infix[i]) <= isOperator(stack[top]))
            {
                postfix[j++] = stack[top--];
            }
 
             
            // top += top 
            stack[++top] = infix[i];
 
        }
        cout << "\n infix == \n"
             << infix[i];
        cout << "\n Postfix == \n"
             << postfix;

        cout << "\n stack == \n"
             << stack[top];
    }

    // after infix expression is completed
    //  pop all the operators in stack and add them to postfix
    while (top != -1)
    {
        postfix[j++] = stack[top--];
        cout << "\n Postfix == \n"
             << postfix;
    }

    postfix[j++] = '\0';

    cout << "\n Postfix == \n"
         << postfix;

    return 0;
    // 
}
*/
