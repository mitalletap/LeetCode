// Problem: Find the sum of all left leaves in a given binary tree.
//
// Solution:
// Check if the root is null. If it is, return 0.
// Check if the root has children. If so, add the values of ONLY the left leaf to an integer.
// Check if both root values are equal to each other. If not, return false.
// If both root values are equal to each other, recursively call the function for its left and right nodes
//
// Statistics
// Runtime: 4ms
// Memory Usage: 13.7MB

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {}
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL){
            return 0;
        } else if(root->left != NULL && root->left->left == NULL && root->left->right == NULL){
           return root->left->val + sumOfLeftLeaves(root->right);
        } else {
            return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
        }
    }
};
