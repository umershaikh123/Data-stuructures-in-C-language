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

node *addNode(node *previous)
{
    node *Node = (struct node *)malloc(sizeof(struct node));

    int d;
    cout << "Enter data : " << endl;
    cin >> d;

    previous->next = Node;

    Node->data = d;
    Node->next = NULL;

    return Node;
}

int main()
{

    node *head = NULL;
    node *one = addNode(head);
    node *two = addNode(one);
    node *three = addNode(two);
}