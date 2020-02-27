/*************************************************************************
    > File Name: LeetCode237.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月27日 星期四 09时38分25秒
 ************************************************************************/

void delete(struct ListNode *node) {
	struct ListNode *p = node->next;
	node->val = p->val;
	node->next = p->next;
	free(p);
	return ;
}

void delete1(struct ListNode *node) {
	*node = *(node->next);
}

