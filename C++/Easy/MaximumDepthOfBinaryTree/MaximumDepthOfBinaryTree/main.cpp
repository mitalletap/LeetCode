// Problem: Write an algorithm to determine if a number is "happy".
// Given a binary tree, find its maximum depth.
// The maximum depth is the number of nodes along the longest path from the
// root node down to the farthest leaf node.
//
// Solution:
// Check if the root is null. If it is, return 0, else continue.
// Recursively call a function that will return the values of the left and right
// child, compare them for depth, and return the greater value.
// +1 to that value to account for the root
//
// Statistics
// Runtime: 20ms
// Memory Usage: 19.4MB

#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return (max(left, right) + 1);
    }
};


int main() {

}
