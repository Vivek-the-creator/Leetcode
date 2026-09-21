// Pushed: 2026-09-21 17:05:29 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 13.3 MB

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp != NULL){
            ListNode* after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }
        return prev;
    }
};