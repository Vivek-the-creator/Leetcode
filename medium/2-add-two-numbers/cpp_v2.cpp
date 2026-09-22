// Pushed: 2026-09-22 10:15:09 UTC
// Difficulty: Medium
// Runtime: 2 ms
// Memory: 77.1 MB

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = new ListNode(-1);
        ListNode* mover = ans;
        int carry = 0;
        while(temp1 != 0 || temp2 != 0 || carry != 0){
            int sum = carry;
            if(temp1 != NULL){
                sum += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2 != NULL){
                sum += temp2->val;
                temp2 = temp2->next;
            }
            ListNode* newval = new ListNode(sum%10);
            carry = sum/10;
            mover->next = newval;
            mover = mover->next;
        }
        return ans->next;
    }
};