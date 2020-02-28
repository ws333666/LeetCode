/*************************************************************************
    > File Name: LeetCode226.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月28日 星期五 15时29分09秒
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if (root == NULL) return NULL;
    struct TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    invertTree(root->left), invertTree(root->right);
    return root;
}

