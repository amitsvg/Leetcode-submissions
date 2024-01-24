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
public:int ans = 0;
    void solve(TreeNode* root,unordered_map<int,int> m){
        if(!root->left && !root->right){
            m[root->val]++;
            int o=0,c=0,f=1;
            for(auto x:m){
                if(x.second&1){
                    o++;
                    if(o>1) f=0;
                }
                c+=x.second;
            }
            if(!(c&1) && o) f = 0;
            if(f) ans++;
            return;
        }
        m[root->val]++;
        if(root->left) solve(root->left,m);
        if(root->right) solve(root->right,m);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root) return ans;
        unordered_map<int,int> m;
        solve(root,m);
        return ans;
    }
};