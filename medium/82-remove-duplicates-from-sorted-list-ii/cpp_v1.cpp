// Pushed: 2026-09-19 05:23:49 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 15.6 MB

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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;
        while (curr != NULL) {
            bool duplicate = false;

            while (curr->next != NULL && curr->val == curr->next->val) {
                duplicate = true;
                curr = curr->next;
            }

            if (duplicate) {
                prev->next = curr->next;
            } else {
                prev = prev->next;
            }

            curr = curr->next;
        }
        return dummy->next;
    }
};