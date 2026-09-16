// Pushed: 2026-09-16 04:55:10 UTC
// Difficulty: Medium
// Runtime: 2349 ms
// Memory: 302.6 MB

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
        vector<int>ll;
        ListNode* temp = head;
        while(temp != NULL){
            ll.push_back(temp->val);
            temp = temp->next;
        }
        for(int i = 0; i < ll.size(); ){
            if(hash[ll[i]] > 0){
                ll.erase(ll.begin() + i);
            }
            else{
                i++;
            }
        }
        ListNode* newhead = new ListNode(ll[0]);
        ListNode* mover = newhead;
        for(int i=1; i<ll.size(); i++){
            ListNode* temp = new ListNode(ll[i], nullptr);
            mover->next = temp;
            mover = temp;
        }
        return newhead;
    }
};