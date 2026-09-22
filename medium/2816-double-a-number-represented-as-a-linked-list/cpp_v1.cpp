// Pushed: 2026-09-22 08:55:07 UTC
// Difficulty: Medium
// Runtime: 25 ms
// Memory: 137.4 MB

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
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }
        head = prev;
        temp = head;
        ListNode* m = new ListNode();
        ListNode* ans = m;
        int carry = 0;
        while(temp != NULL || carry != 0){
            int mul = carry;
            if(temp != NULL){
                mul += temp->val * 2;
                temp = temp->next;
            }
            if(mul >= 10){
                ListNode* v = new ListNode(mul%10);
                carry = mul/10;
                m->next = v;
                m = m->next;
            }
            else{
                ListNode* v = new ListNode(mul);
                carry = 0;
                m->next = v;
                m = m->next;
            }
        }
        ans = ans->next;
        ListNode* curr = ans;
        ListNode* pre = nullptr;
        while(curr != NULL){
            ListNode* after = curr->next;
            curr->next = pre;
            pre = curr;
            curr = after;
        }
        return pre;
    }
};