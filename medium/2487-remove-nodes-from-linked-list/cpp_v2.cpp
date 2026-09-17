// Pushed: 2026-09-17 05:40:22 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 161.3 MB

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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* front = temp->next;
        while(temp != NULL){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
            
        }
        head = prev;
        temp = head;
        prev = NULL;
        int maxi = head->val;
        while (temp != NULL) {
            
            if (temp->val >= maxi) {
                maxi = temp->val;
                if (prev == NULL) {
                    head = temp;
                } else {
                    prev->next = temp;
                }
                prev = temp;
            }

            temp = temp->next;
        }
        if (prev != NULL) {
            prev->next = NULL;
        }
        temp = head;
        prev = NULL;
        front = temp->next;
        while(temp != NULL){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front; 
        }
        return prev;
    }
};