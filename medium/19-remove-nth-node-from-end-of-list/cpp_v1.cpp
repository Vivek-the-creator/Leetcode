// Pushed: 2026-09-17 05:56:53 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 14.9 MB

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* temp = head;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        if(size-n == 0){
            head = head->next;
            return head;
        }
        temp = head;
        ListNode* prev = NULL;
        int cnt = 0;

        while(temp != NULL){
            cnt++;
            if(cnt == (size-n)+1){
                prev->next = temp->next;
                temp->next = nullptr;
                temp = prev->next;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};