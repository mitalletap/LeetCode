// Problem:
// Reverse a LinkedList
//
// Solution:
// Check if head or head->next is NULL. If so, return the head
// Recursively call the reverseList function with head->next
// Set the head
//
// Statistics
// Runtime: 12ms
// Memory Usage: 9.8MB



// Visual
// 3 -> 2 -> 1 -> NULL
// NULL <- 3 <- 2 <- 1

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* p = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return p;
    }
};

int main() {
}
