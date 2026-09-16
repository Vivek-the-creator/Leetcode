// Pushed: 2026-09-16 05:20:03 UTC
// Difficulty: Medium
// Runtime: 132 ms
// Memory: 277.1 MB

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
        ListNode* ans = new ListNode();
        ListNode* c = ans;
        while(temp != NULL){
            if(hash[temp->val] > 0){
                temp = temp->next;
            }
            else{
                c -> next = temp;
                c = c->next;
                temp = temp -> next;
            }
        }
        c->next = NULL;
        return ans->next;
    }
};