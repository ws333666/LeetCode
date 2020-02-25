/*************************************************************************
    > File Name: LeetCode141.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月25日 星期二 22时57分59秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    if (p == NULL) return false;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return false;
        q = q->next;
    } while (p != q);
    return true;
}