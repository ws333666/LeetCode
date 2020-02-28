/*************************************************************************
    > File Name: LeetCode111.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月28日 星期五 15时00分49秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    if (root->left == NULL || root->right == NULL) {
        return minDepth(root->right ? root->right : root->left) + 1;
    }
    return fmin(minDepth(root->left), minDepth(root->right)) + 1;
}

