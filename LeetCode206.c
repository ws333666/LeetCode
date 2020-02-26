/*************************************************************************
    > File Name: LeetCode206.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月26日 星期三 17时25分19秒
 ************************************************************************/

struct ListNoderever(struct ListNode *head) {
	struct ListNode ret, *p = head, *q;
	ret.next = NULL;
	while (p) {
		q = p->next;
		p->next = ret.next;
		ret.next = p;
		p = q;
	}
	return ret.next;
}


