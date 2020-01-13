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
