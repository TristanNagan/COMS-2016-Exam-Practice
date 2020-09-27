#include "bst.h"
#include <stdexcept>
#include <iostream>

using namespace std;

void Tree::insert(int v, TreeNode* &subtree){
        if(subtree == nullptr){
           subtree = new TreeNode(v);
        }else if(v < subtree->value){
            insert(v, subtree->left);
        }else{
            insert(v, subtree->right);
        }
    }

    void Tree::preOrderTraversal(TreeNode* subtree) const{
	cout<<subtree->value<<" ";
	if(subtree->left != nullptr){
		preOrderTraversal(subtree->left);
	}
	if(subtree->right != nullptr){
		preOrderTraversal(subtree->right);
	}
    }

    void Tree::inOrderTraversal(TreeNode* subtree) const{
	if(subtree->left != nullptr){
		inOrderTraversal(subtree->left);
	}
	cout<<subtree->value<<" ";
	if(subtree->right != nullptr){
		inOrderTraversal(subtree->right);
	}
    }

    void Tree::postOrderTraversal(TreeNode* subtree) const{
	if(subtree->left != nullptr){
		postOrderTraversal(subtree->left);
	}
	if(subtree->right != nullptr){
		postOrderTraversal(subtree->right);
	}
	cout<<subtree->value<<" ";
    }

    int Tree::min(TreeNode* subtree) const{
	if(subtree->left != nullptr){
            return min(subtree->left);
        }else{
            return subtree->value;
        }
    }
    int Tree::max(TreeNode* subtree) const{
	if(subtree->right != nullptr){
            return max(subtree->right);
        }else{
            return subtree->value;
        }
    }
    bool Tree::contains(int value, TreeNode* subtree) const{
	if(subtree == nullptr){
            return false;
        }
	if(subtree->value == value){
            return true;
        }else if(value < subtree->value){
            return contains(value, subtree->left);
	}else{
            return contains(value, subtree->right);
        }
    }
    void Tree::remove(int value, TreeNode* &subtree){
	if(subtree == nullptr){
            return;
        }
	if(subtree->value == value){
            if(subtree->left == nullptr && subtree->right == nullptr){
			delete subtree;
			subtree = nullptr;
		}else if(subtree->left != nullptr && subtree->right == nullptr){
			TreeNode* tmp = subtree->left;
			subtree->left = nullptr;
			delete subtree;
			subtree = tmp;
		}else if(subtree->left == nullptr && subtree->right != nullptr){
			TreeNode* tmp = subtree->right;
			subtree->right = nullptr;
			delete subtree;
			subtree = tmp;
		}else{
			subtree->value = min(subtree->right);
			remove(subtree->value, subtree->right);
		}

        }else if(value < subtree->value){
            remove(value, subtree->left);
	}else{
            remove(value, subtree->right);
        }
    }

    void Tree::insert(int value){
        insert(value, root);
    }

    void Tree::preOrderTraversal(){
        preOrderTraversal(root);
        cout << endl;
    }
    void Tree::inOrderTraversal(){
        inOrderTraversal(root);
        cout << endl;
    }
    void Tree::postOrderTraversal(){
        postOrderTraversal(root);
        cout << endl;
    }
    int Tree::min(){
        return min(root);
    }
    int Tree::max(){
        return max(root);
    }
    bool Tree::contains(int value){
        return contains(value, root);
    }
    void Tree::remove(int value){
        remove(value, root);
    }
    Tree::~Tree(){
        // This ends up deleting all the nodes recursively.
        delete root;
    }
