// Pushed: 2026-09-21 17:58:29 UTC
// Difficulty: Medium
// Runtime: 3 ms
// Memory: 124.4 MB

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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;

        while (temp != nullptr) {
            ListNode* after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }

        return prev;
    }

    int pairSum(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = reverse(slow);

        ListNode* first = head;

        int ans = 0;

        while (second != nullptr) {
            ans = max(ans, first->val + second->val);

            first = first->next;
            second = second->next;
        }

        return ans;
    }
};