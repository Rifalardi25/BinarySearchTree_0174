#include <iostream>
using namespace std;

class Node {
    public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the class
    Node()
    {
        leftchild = nullptr; // Initialize left child to NULL
        rightchild = nullptr; // Initialize right child to NULL
    }
};

class BinaryTree
{
    public:
        Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initializing ROOT to NULL
    }


};