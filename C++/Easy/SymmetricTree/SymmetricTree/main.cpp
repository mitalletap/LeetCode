// Problem:
// Given a binary tree, check whether it is a mirror of
// itself (ie, symmetric around its center).
//
// Solution:
// First check if the root is null
// Next, create a recursive function to compare the left and right child
// Compare the left-left and right-right AND the left-right and right-left for symmetry
//
// Runtime: 4ms
// Memory Usage: 14.7MB

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

bool isEqual(TreeNode* left, TreeNode* right){
    if(left == NULL || right == NULL){
        return (left == right);
    }
    if(left->val != right->val){
        return false;
    }
    return (isEqual(left->left, right->right) && isEqual(left->right, right->left));

}


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }

        return isEqual(root->left, root->right);
    }
};


int main() {
}
