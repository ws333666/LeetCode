/*************************************************************************
    > File Name: LeetCode20.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月27日 星期四 10时26分06秒
 ************************************************************************/

bool isValid(char *s) {
	int len = strlen(s), top = -1, flag = 1;
	char *stack = (char *)malloc(sizeof(char) * len);
	while (s[0]) {
		switch (s[0]) {
			case '(':
			case '[':
			case '{': stack[++top] = s[0]; break;
			case ')': flag = (top != -1 && stack[top--] == '('); break;
			case ']': flag = (top != -1 && stack[top--] == '['); break;
			case '}': flag = (top != -1 && stack[top--] == '{'); break;
		}
		if (!flag) break;
		s++;
	}
	free(stack);
	return (flag && top == -1);
}

