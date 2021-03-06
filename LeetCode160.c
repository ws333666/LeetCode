/*************************************************************************
    > File Name: LeetCode160.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月25日 星期二 22时58分24秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;
    while (p != q) {
        p = p ? p->next : headB;
        q = q ? q->next : headA; 
    }
    return q;
}