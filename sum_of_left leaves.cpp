/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	void getSumOfLeftLeaves(TreeNode* root, int &sum) {
    	if (root == NULL) return;
    	if (root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
    		sum += root->left->val;
    	}
    	getSumOfLeftLeaves(root->left, sum);
    	getSumOfLeftLeaves(root->right, sum);

    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        getSumOfLeftLeaves(root, sum);
        return sum;
        
    }
    

};