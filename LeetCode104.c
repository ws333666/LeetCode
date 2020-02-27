/*************************************************************************
    > File Name: LeetCode104.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月27日 星期四 11时16分04秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    int d1 = maxDepth(root->left);
    int d2 = maxDepth(root->right);
    return fmax(d1, d2) + 1;
}