#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

const int totalSize = 3;
int stack[totalSize]; // stack using an array
int top = -1;

int pop()
{
    int r;
    if (top != -1)
    {
        r = stack[top];
        top--;
        return r;
    }

    else
    {
        cout << "error cannot perform pop on empty stack";
    }
}

void push(int data)
{

    if (top != totalSize)
    {
        top++;
        stack[top] = data;
    }

    else
    {
        cout << "error Stack is full";
    }
}

int main()
{

    return 0;
}
