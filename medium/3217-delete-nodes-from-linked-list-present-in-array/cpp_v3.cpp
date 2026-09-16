// Pushed: 2026-09-16 05:34:33 UTC
// Difficulty: Medium
// Runtime: 120 ms
// Memory: 277.3 MB

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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            if(hash[temp->val] > 0){
                if(temp == head){
                    head = head->next;
                    temp = head;
                    continue;
                }
                prev->next = temp->next;
                temp = temp->next;
                continue;
            }
            prev = temp;
            temp = temp->next;
            
        }
        return head;
    }
};