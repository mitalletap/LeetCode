// Problem:
// Given two binary trees, write a function to check if they are the same or not.
//
// Solution:
// Check if both roots are null. If they are, return false.
// Check if only one root is null. If so, return false.
// Check if both root values are equal to each other. If not, return false.
// If both root values are equal to each other, recursively call the function for its left and right nodes
//
// Statistics
// Runtime: 4ms
// Memory Usage: 9.7MB

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL){
            return true;
        } else if(p == NULL || q == NULL){
            return false;
        } else if(p->val != q-> val){
            return false;
        } else {
            return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
        }

    }
};
