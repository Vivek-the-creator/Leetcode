// Pushed: 2026-09-22 07:19:35 UTC
// Difficulty: Medium
// Runtime: 3 ms
// Memory: 77 MB

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
        ListNode* prev1 = nullptr;
        while(temp1 != NULL){
            ListNode* after = temp1->next;
            temp1->next = prev1;
            prev1 = temp1;
            temp1 = after;
        }
        l1 = prev1;
        temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* prev2 = nullptr;
        while(temp2 != NULL){
            ListNode* after = temp2->next;
            temp2->next = prev2;
            prev2 = temp2;
            temp2 = after;
        }
        l2 = prev2;
        temp2 = l2;
        int carry = 0;
        ListNode* ans = new ListNode();
        ListNode* head = ans;
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
            if(sum >= 10){
                carry = sum/10;
                ListNode* v = new ListNode(sum%10);
                ans->next = v;
                ans = ans->next;
            } else{
                carry = 0;
                ListNode* v = new ListNode(sum);
                ans->next = v;
                ans = ans->next;
            }

        }
        head = head->next;
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