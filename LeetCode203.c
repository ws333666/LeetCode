/*************************************************************************
    > File Name: LeetCode203.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月26日 星期三 11时20分22秒
 ************************************************************************/

struct ListNode *removeElement(struct ListNode *head, int val) {
	struct ListNode ret, *p = &ret, *q;
	ret.next = head;
	while (p && p->next) {
		if (p->next->val == val) {
			q = p->next;
			p->next = q->next;
			free(q);
		} else {
			p = p->next;
		}
	}
	return ret.next;
}

