// Pushed: 2026-10-06 17:19:50 UTC
// Difficulty: Easy
// Runtime: 55 ms
// Memory: 23.8 MB

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* pA = headA;
        ListNode* pB = headB;

        while (pA != pB) {
            if (pA == nullptr)
                pA = headB;
            else
                pA = pA->next;

            if (pB == nullptr)
                pB = headA;
            else
                pB = pB->next;
        }

        return pA;
    }
};