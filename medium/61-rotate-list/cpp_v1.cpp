// Pushed: 2026-09-21 17:43:47 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 16.4 MB

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
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }
        return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0){
            return head;
        }
        
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp -> next;
        }
        k = k%cnt;
        if(k==0){
            return head;
        }
        head = reverse(head);
        ListNode* f = head;
        ListNode* s = head;
        for(int i=1; i<k; i++){
            s = s->next;
        }
        ListNode* rem = s->next;
        s->next = nullptr;
        f = reverse(f);
        rem = reverse(rem);
        s = f;
        while(s->next != nullptr){
            s = s->next;
        }
        s->next = rem;
        return f;

    }
};