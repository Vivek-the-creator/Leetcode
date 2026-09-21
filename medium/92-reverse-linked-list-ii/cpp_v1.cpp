// Pushed: 2026-09-21 04:35:19 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 11.2 MB

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right){
            return head;
        }
        ListNode* temp = head;
        ListNode* prev = nullptr;
        for(int i=1; i<left; i++){
            prev = temp;
            temp = temp->next;
        }
        ListNode* l = prev;
        ListNode* r = temp;
        ListNode* after = temp->next;
        for(int i=left; i<=right; i++){
            ListNode* after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }
        if(l != NULL){
            l->next = prev;
        }else{
            head = prev;
        }
        r->next = temp;
        return head;

    }
};