

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
    string infix = "(A+B)*(C+D)";

    string postfix = "                 ";
    //  string *postfix = new string[30];
    char stack[20];
    int top = -1;
    int j = 0; // counter for postfix

    // looping through infix
    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] == '(')
        {
            stack[++top] = '(';
            continue;
        }

        if (infix[i] == ')')
        {
            while (stack[top] != ')')
                postfix[j++] = stack[top--];
            top++; // to remove ')'
            continue;
        }
        if (isOperator(infix[i]) == 0) // operand
            postfix[j++] = infix[i];
        else
        { // operator
            if (stack[top] == '(' || top == -1)
            {
                stack[++top] = infix[i];
                continue;
            }

            while (top != -1 && isOperator(infix[i]) <= isOperator(stack[top]))
                postfix[j++] = stack[top--];

            stack[++top] = infix[i];
        } // end of else
    }     // end of loop
    while (top >= 0)
        postfix[j++] = stack[top--];
    postfix[j++] = '\0';
    printf("%s", postfix);
    return 0;
}
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// int isOperate(char op)
// {
//     if (op == '+' || op == '-')
//         return 1;

//     else if (op == '*' || op == '/')
//         return 2;

//     else if (op == op == '^')
//         return 3;

//     else if (op == '(')
//         return 4;

//     else
//         return 0;
// }

// int main()
// {

//     char *stack = new char[25];
//     string postfix = "              ";
//     string infix = "(A+B)*(C+D)";
//     int top = -1;
//     int j = 0;

//     for (int i = 0; i < infix.length(); i++)
//     {
//         if (infix[i] == ')')
//         {
//             while (stack[top] != '(')
//             {
//                 postfix[j++] = stack[top--];
//             }

//             // stack[top--]
//         }
//         else
//         {
//             if (isOperate(infix[i]) == 0)
//             {
//                 postfix += infix[i];
//             }
//             else
//             {
//                 if (top == -1 || stack[top] == '(')
//                 {
//                     stack[++top] = infix[i];
//                 }
//                 else
//                 {
//                     while (top != -1 && isOperate(infix[i]) <= isOperate(stack[top]))
//                     {
//                         postfix[j++] = stack[top--];
//                     }
//                     stack[++top] = infix[i];
//                 }
//             }
//         }
//     }
//     while (top != -1)
//     {
//         postfix[j++] = stack[top--];
//     }

//     cout << postfix;
// }