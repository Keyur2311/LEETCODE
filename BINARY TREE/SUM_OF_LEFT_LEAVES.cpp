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
class Solution
{
public:
    bool isLeaf(TreeNode *root)
    {
        return !root->left && !root->right;
    }

    int sum = 0;
    void sumLeft(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        if (root->left && isLeaf(root->left))
            sum += (root->left->val);

        sumLeft(root->left);
        sumLeft(root->right);
    }
    int sumOfLeftLeaves(TreeNode *root)
    {

        sumLeft(root);
        return sum;
    }
};
