#include <iostream>

using namespace std;

/*NODE*/
struct Node
{
  int data;
  Node *left, *right;
};

class Tree
{
  Node *root;
  public:
  tree()
  {
    
  };
  ~tree()
  {
    
  };
  void insertTree(int num)
  {
    //create record
    Node *node, *before, *after;
    node = new Node;
    //add data
    node->data = num;
    node->left = NULL;
    node->right = NULL;
    //find position
    if ( root == NULL )
    {
      root = node;
    }
    else
    {
      after = root;
      while ( after != NULL )
      {
        before = after;
        if ( num <= after->data )
        {
          after = after->left;
        }
        else
        {
          after = after->right;
        }
      }
    }
    //insert
    if ( n <= before->data )
    {
      before->left = node;
    }
    else
    {
      before->right = node;
    }
  };
  void delTree(int data)
  {
   //search for the node 
  };
  bool isemptytree()
  {
    return root == NULL;
  };
  bool isfulltree()
  {
    return false;
  };
};

int main() 
{
  /*
  5 things that will be in the exam
  1. recursion output
    -local
    -global
    -arguments
  2. stack output
  3. queue output
  4. stack program
  5. queue program
  */
  Node * node = new Node;
  node->data = 1;
  node->left = NULL;
  
  cout << node->data << endl;
  cout << node->left << endl;
  return 0;
}

