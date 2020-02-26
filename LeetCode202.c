/*************************************************************************
    > File Name: LeetCode202.c
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月26日 星期三 10时58分54秒
 ************************************************************************/

int get_next(int x) {
	int temp = 0;
	while (x) {
		temp += (x % 10) * (x % 10);
		x /= 10;
	}
	return temp;
}

bool isHappy(int n) {
	int p = n, q = n;
	while (q != 1) {
		p = get_next(p);
		q = get_next(get_next(q));
		if (p == q) break;
	}
	return (q == 1);
}
