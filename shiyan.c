#include <stdio.h>
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	if(n%2==0&&n%3!=0)
	{
		printf("整数%d是偶数，不能被3整除。",n);
	}
	if(n%2==0&&n%3==0)
	{
		printf("整数%d是偶数，能被3整除。",n);
	}
	if(n%2!=0&&n%3==0)
	{
		printf("整数%d是奇数，能被3整除。",n);
	}
	if(n%2!=0&&n%3!=0)
	{
		printf("整数%d是奇数，不能被3整除。",n);
	}
	return 0;
}
