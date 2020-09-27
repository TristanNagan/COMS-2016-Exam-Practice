#ifndef BST
#define BST
#include <iostream>

using namespace std;

class TreeNode{
public:
    // Pointer to the left child
    //  Initialised to nullptr (this syntax is a new C++11 feature)
    TreeNode* left = nullptr;
    // Pointer to the right child
    //  Initialised to nullptr (this syntax is a new C++11 feature)
    TreeNode* right = nullptr;

    // Value in the node
    int value;

    // Constructor, sets the value
    TreeNode(int v) : value(v) {}
    // Destructor, nifty trick to recursively delete all the nodes
    //  be careful though, when you delete just a single node, make
    //  sure that you set left and right = nullptr first
    ~TreeNode() {
        delete left;
        delete right;
    }
};

class Tree{
private:
    TreeNode* root = nullptr;

public:
    void insert(int v, TreeNode* &subtree);
    void insert(int value);

    void preOrderTraversal(TreeNode* subtree) const;
    void preOrderTraversal();

    void inOrderTraversal(TreeNode* subtree) const;
    void inOrderTraversal();

    void postOrderTraversal(TreeNode* subtree) const;
    void postOrderTraversal();

    int min(TreeNode* subtree) const;
    int min();

    int max(TreeNode* subtree) const;
    int max();

    void remove(int value, TreeNode* &subtree);
    void remove(int value);

    bool contains(int value, TreeNode* subtree) const;
    bool contains(int value);

    ~Tree();
	
};

#endif // BST
