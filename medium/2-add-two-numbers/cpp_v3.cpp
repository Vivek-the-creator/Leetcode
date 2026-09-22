// Pushed: 2026-09-22 10:17:52 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 77.3 MB

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
            if(temp1){
                sum += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2){
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