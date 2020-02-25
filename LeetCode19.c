/*************************************************************************
    > File Name: LeetCode19.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月25日 星期二 22时56分49秒
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = q = &ret;
    while (n--) q = q->next;
    q = q->next;
    while (q) {
        p = p->next;
        q = q->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return ret.next;
}