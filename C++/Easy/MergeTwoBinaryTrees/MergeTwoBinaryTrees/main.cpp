// Problem:
// Given two binary trees and imagine that when you put one of
// them to cover the other, some nodes of the two trees are overlapped
// while the others are not.
// You need to merge them into a new binary tree. The merge rule is
// that if two nodes overlap, then sum node values up as the new value
// of the merged node. Otherwise, the NOT null node will be used as the
// node of new tree.
//
// Solution:
// Check if one tree root is null. If so, return the other tree
// For both trees add the second tree value to the first
// Recursively call the same function for the left and right branches
// of that tree
// Return tree 1
//
// Statistics
// Runtime: 56ms
// Memory Usage: 22.5MB

#include <iostream>
#define COUNT 10
using namespace std;
struct node {
    int val;
    struct node *left;
    struct node *right;
};

struct node* newNode(int val){
    struct node* node = new struct node();
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return (node);
}


class Solution {
public:
    node* mergeTrees(node* t1, node* t2) {
        if(!t1){
            return t2;
        }
        if(!t2){
            return t1;
        }
        t1->val += t2->val;
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        return t1;
    }


    void printTree(node *t1, int space)
    {
        if (t1 == NULL){
            return;
        }
        space += COUNT;
        printTree(t1->right, space);
        cout << endl;
        for (int i = COUNT; i < space; i++){
            cout << " ";
        }
        cout << t1->val << "\n";
        printTree(t1->left, space);
    }
};







int main() {
    struct node *t1 = newNode(1);
    struct node *t2 = newNode(2);
    t1->left = newNode(3);
    t1->right = newNode(2);
    t1->left->left = newNode(5);
    t2->left = newNode(1);
    t2->right = newNode(3);
    t2->left->right = newNode(4);
    t2->right->right = newNode(7);

    Solution A;
    A.mergeTrees(t1, t2);
    A.print2DUtil(t1, 1);





    return 0;
}
