// Pushed: 2026-09-23 04:56:24 UTC
// Difficulty: Medium
// Runtime: 168 ms
// Memory: 99.3 MB

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list1;
        ListNode* l2 = list2;
        for(int i=0; i<a-1; i++){
            temp1 = temp1->next;
        }
        for(int i=0; i<=b; i++){
            temp2 = temp2->next;
        }
        temp1->next = l2;
        while(l2->next != NULL){
            l2 = l2->next;
        }
        
        if(temp2 != NULL)
            l2->next = temp2;
        return list1;
    }
};