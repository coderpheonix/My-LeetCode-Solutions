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
    vector<vector<int>> levelOrder(TreeNode* root) {

       vector<vector<int>> result;
       if(!root) return result; // return nothing if the root is nullptr

       queue<TreeNode*>q;
       q.push(root);

       // continue the process untill there is no node
       while(!q.empty())
       {
        int size = q.size();
        vector<int> level;

         // run the loop to process each node
        for (int i=0; i<size;i++)
        {
            /// Get the next node from the front of the queue.
            TreeNode* node=q.front();
            q.pop();
            level.push_back(node->val);
             // if the curent node has a left child
            if(node->left) q.push(node->left);

            if(node-> right) q.push(node-> right);
        }
        result.push_back(level);
       }

       return result;
    }
};
