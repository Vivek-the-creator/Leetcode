/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int add(vector<int>& s){
        int n=s.size()-1;
        int ans=0;
        for(int i=0;i<=n;i++)
            if(s[i]==1)
              ans+=pow(2,n-i);
        return ans;
    }
    void trs(TreeNode* root,vector<int>& s,int &sum){
        if(!root)
            return;
        s.push_back(root->val);
        if(!root->left&&!root->right)
            sum+=add(s);
        trs(root->left,s,sum);
        trs(root->right,s,sum);
        s.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0;
        vector<int>s;
        trs(root,s,sum);
        return sum;
    }
};