#include <stdio.h>
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("整数%d是%s数，%s被3整除。",n,(n%2==0?"偶":"奇"),(n%3==0?"能":"不能"));
	return 0;
}
