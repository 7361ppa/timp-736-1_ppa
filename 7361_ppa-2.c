#include <stdio.h>
int main(void)
{
	int n, count = 0, xi;
	scanf("%d", &n);
	if (n <0)
	{
		scanf("%d", &n);
	}
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &xi);
		if (xi < 0)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
