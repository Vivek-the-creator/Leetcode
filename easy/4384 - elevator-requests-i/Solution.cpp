class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int curr = 0;
        int ans = 0;
        for(int i:requests){
            ans+=abs(curr-i);
            curr=i;
        }
        return ans;
    }
};