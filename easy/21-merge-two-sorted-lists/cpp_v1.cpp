// Pushed: 2026-09-23 04:41:12 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 19.4 MB

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* anshead = ans;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while(temp1 != NULL || temp2 != NULL){
            int mini = INT_MAX;
            int check = 0;
            if(temp1 != NULL){
                mini = min(temp1->val, mini);
            }
            if(temp2 != NULL){
                mini = min(temp2->val, mini);
            }
            if(temp1 != NULL && mini == temp1->val){
                ans->next = temp1;
                temp1 = temp1->next;
            }else{
                ans->next = temp2;
                temp2 = temp2->next;
            }
            ans = ans->next;
        }
        return anshead->next;
    }
};