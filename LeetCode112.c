/*************************************************************************
    > File Name: LeetCode112.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月28日 星期五 15时23分07秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int sum){
    if (root == NULL) return false;
    if (root->left == 0 && root->right == NULL) return root->val == sum;
    return hasPathSum(root->left, sum - root->val) ||
    hasPathSum(root->right, sum - root->val);
}

