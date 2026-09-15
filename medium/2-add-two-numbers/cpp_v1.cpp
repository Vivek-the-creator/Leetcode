// Pushed: 2026-09-15 04:16:47 UTC
// Difficulty: Medium
// Runtime: 5 ms
// Memory: 77.5 MB

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
        vector<int> ans;
        int carry = 0;
        while(temp1 != NULL || temp2 != NULL || carry != 0){
            int sum = carry;
            if(temp1 != NULL){
                sum += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2 != NULL){
                sum += temp2->val;
                temp2 = temp2->next;
            }
            carry = sum/10;
            ans.push_back(sum%10);
        }
        ListNode* head = new ListNode(ans[0], nullptr);
        ListNode* mover = head;
        for(int i=1; i<ans.size(); i++){
            ListNode* temp = new ListNode(ans[i], nullptr);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }
};