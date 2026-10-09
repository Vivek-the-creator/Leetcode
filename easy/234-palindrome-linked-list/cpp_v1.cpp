// Pushed: 2026-10-09 16:57:31 UTC
// Difficulty: Easy
// Runtime: 11 ms
// Memory: 119.4 MB

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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        string s1 = "";
        while(temp != NULL){
            s1.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }
        temp = prev;
        string s2 = "";
        while(temp != NULL){
            s2.push_back(temp->val);
            temp = temp->next;
        }
        if(s1 == s2){
            return true;
        }
        return false;
    }
};