// Pushed: 2026-09-18 03:53:40 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 16.2 MB

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
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* temp = head;
        ListNode* after = temp->next;
        while(after != NULL){
            if(temp->val == after->val){
                temp->next = after->next;
                after->next = nullptr;
                after = temp->next;

            }else{
                temp = temp->next;
                after = after->next;
            }
        }
        return head;
    }
};