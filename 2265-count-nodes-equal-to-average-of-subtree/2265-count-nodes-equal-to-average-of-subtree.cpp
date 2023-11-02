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

    int rsum, ncount;
    
    void dfs(TreeNode *node)    {
        if(node == NULL) {
            return;
        }

        rsum += node->val;
        ncount++;

        dfs(node->left);
        dfs(node->right);
    }
    
    int averageOfSubtree(TreeNode* root) {

        queue<TreeNode*> cue;
        cue.push(root);
        int retVal = 0;

        while(!cue.empty()) {

            TreeNode *temp = cue.front();
            cue.pop();
            int val = temp->val;
            rsum = ncount = 0;

            dfs(temp); 
            if(rsum / ncount == val)
                retVal++;

            if(temp->left != NULL)
                cue.push(temp->left);
            if(temp->right != NULL)
                cue.push(temp->right);
        }
        return retVal;
    }
};