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

struct node
{
    char c;
    struct node *lc;
    struct node *rc;
};

// Preorder traversal
void preorderTraversal(struct node *node)
{
    cout << node->c << "->";

    if (node->lc != NULL)
    {
        inorderTraversal(node->lc);
    }

    if (node->rc != NULL)
    {
        inorderTraversal(node->rc);
    }
}

// Postorder traversal
void postorderTraversal(struct node *node)
{
    if (node->lc != NULL)
    {
        inorderTraversal(node->lc);
    }

    if (node->rc != NULL)
    {
        inorderTraversal(node->rc);
    }
    cout << node->c << "->";
}

// Inorder traversal
void inorderTraversal(struct node *node)
{

    if (node->lc != NULL)
    {
        inorderTraversal(node->lc);
    }

    cout << node->c << "->";

    if (node->rc != NULL)
    {
        inorderTraversal(node->rc);
    }
}

int main()
{

    struct node *root = nullptr;

    struct node *stack[10];
    int top = -1;

    string infix = "AB+CD-* ";

    for (int i = 0; i < infix.length(); i++)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->c = infix[i];
        temp->lc = nullptr;
        temp->rc = nullptr;

        if (isOperator(infix[i]) == 0)
        {
            stack[++top] = temp;
        }

        else
        {

            temp->rc = stack[top--];
            temp->lc = stack[top--];
            stack[++top] = temp;
        }
    }

    root = stack[top--];

    return 0;
}