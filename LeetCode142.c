/*************************************************************************
    > File Name: LeetCode142.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月25日 星期二 22时58分10秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    while (q) {
        p = p->next;
        q = q->next;
        if (q == NULL) return NULL;
        q = q->next;
        if (p == q) break;
    }
    if (q == NULL) return NULL;
    q = head;
    while (p != q) {
        p = p->next;
        q = q->next;
    }
    return p;
}