#include <stdio.h>
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	if(n%2==0&&n%3!=0)
	{
		printf("����%d��ż�������ܱ�3������",n);
	}
	if(n%2==0&&n%3==0)
	{
		printf("����%d��ż�����ܱ�3������",n);
	}
	if(n%2!=0&&n%3==0)
	{
		printf("����%d���������ܱ�3������",n);
	}
	if(n%2!=0&&n%3!=0)
	{
		printf("����%d�����������ܱ�3������",n);
	}
	return 0;
}
