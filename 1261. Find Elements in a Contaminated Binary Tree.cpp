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
class FindElements {
private:
    unordered_set<int> values;  // Stores valid values for O(1) lookup

    // Recursively reconstruct tree
    void recover(TreeNode* node, int val) {
        if (!node) return;
        node->val = val;  // Assign correct value
        values.insert(val);  // Store value in set
        recover(node->left, 2 * val + 1);
        recover(node->right, 2 * val + 2);
    }
public:
    FindElements(TreeNode* root) {
        if (root) {
            recover(root, 0);  // Start recovery with root value = 0
        }
    }

    bool find(int target) {
        return values.count(target) > 0;  // Check if target exists
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
