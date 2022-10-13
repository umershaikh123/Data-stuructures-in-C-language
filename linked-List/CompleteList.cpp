#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

// Creating a node using class

/// Creating a node using struct
struct node
{
    int data;
    struct node *next;
};

class LinkedList
{

private:
    node *head;
    node *tail;

public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void createNode(int value)
    {
        node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = value;
        temp->next = nullptr;

        if (head == nullptr)

        // if (temp->next->next != NULL)
        {
            head = temp;
            tail = temp;
        }

        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
};

int main()
{
    LinkedList *list = new LinkedList;

    return 0;
}