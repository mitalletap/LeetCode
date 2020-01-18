// Problem:
// Invert a binary tree
//
// Solution:
// Check if the root is null.
// If the root is not null, create 2 new TreeNodes for the left and right branches.
// Set the newly created TreeNodes to the recursive call of the respective root branch.
// Invert the values of the root.
//
//
// Statistics
// Runtime: 4ms
// Memory Usage: 10.1MB

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        TreeNode* right = invertTree(root->right);
        TreeNode* left = invertTree(root->left);
        root->left = right;
        root->right = left;
        return root;
    }
};

int main() {
}
