// Pushed: 2026-09-17 06:35:19 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 15.4 MB

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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* ehead = even;

        while (odd->next != NULL && odd->next->next != NULL) {
            odd->next = odd->next->next;
            odd = odd->next;

            even->next = even->next->next;
            even = even->next;
        }

        odd->next = ehead;

        return head;
    }
};