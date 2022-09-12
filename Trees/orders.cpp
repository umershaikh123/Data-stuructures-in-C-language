#include <iostream>
using namespace std;

struct Node
{
  char data;
  struct Node *left, *right;
    Node (int data)
  {
    this->data = data;
    left = right = NULL;
  }
};

// Preorder traversal
// NLR
void
preorderTraversal2 (struct Node *node)
{
  if (node == NULL)
    return;

  cout << node->data << "  ";
  preorderTraversal2 (node->left);
  preorderTraversal2 (node->right);
}


// Preorder traversal
// NLR
void
preorderTraversal (struct Node *node)
{
    
cout << node->data << "  ";
 
   
//   preorderTraversal (node->left);
//   preorderTraversal (node->right);
  
  
   if (node->left != NULL)
    {

      preorderTraversal  (node->left);

      cout << node->data << " ";
    }

//   if (node->left == NULL)
//     {

//       cout << node->data << " ";
//     }



  if (node->right != NULL)
    {
      preorderTraversal  (node->right);
    }
  
  
}



// Postorder traversal
void
postorderTraversal (struct Node *node)
{
  if (node == NULL)
    return;

  postorderTraversal (node->left);
  postorderTraversal (node->right);
  cout << node->data << "  ";
}

// Inorder traversal
// void
// inorderTraversal2 (struct Node *node)
// {
//   if (node == NULL)
//     return;

//   inorderTraversal2 (node->left);
//   cout << node->data << " ";
//   inorderTraversal2 (node->right);
// }



// Inorder traversal
//LNR
void
inorderTraversal (struct Node *node)
{


  if (node->left != NULL)
    {

      inorderTraversal (node->left);

      cout << node->data << " ";
    }

  if (node->left == NULL)
    {

      cout << node->data << " ";
    }



  if (node->right != NULL)
    {
      inorderTraversal (node->right);
    }


  return;


}



int
main ()
{

  string infix = "(a+b)*(c-d)";


  struct Node *root = new Node ('*');
  root->left = new Node ('+');
  root->right = new Node ('-');
  root->left->left = new Node ('a');
  root->left->right = new Node ('b');

  root->right->left = new Node ('c');
  root->right->right = new Node ('d');

  cout << "\nInorder traversal ";
  inorderTraversal (root);

  cout << "\nInorder2 traversal ";
  inorderTraversal2 (root);

//   cout << "\nPreorder traversal ";
//   preorderTraversal (root);

//   cout << "\nPostorder traversal ";
//   postorderTraversal (root);

  return 0;
}

// BINARY SEARCH TREE
// AVL TREE
//binary heap
