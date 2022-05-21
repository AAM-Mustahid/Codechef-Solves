#include <stdio.h>

int main(void)
{
	// your code goes here
	int n, a, b, first, second;
	scanf("%d %d %d", &n, &a, &b);
	first = n - a;
	second = first - b;
	printf("%d %d\n", first, second);
	return 0;
}