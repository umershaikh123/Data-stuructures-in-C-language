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
    node *next;
};

int main()
{
    /* Initialize nodes */
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    /* Allocate memory */
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));

    /* Assign data values */
    one->data = 1;
    two->data = 2;
    three->data = 3;

    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = NULL;

    /* Save address of first node in head */
    head = one;
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }
}