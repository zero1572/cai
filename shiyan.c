#include <stdio.h>
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("����%d��%s����%s��3������",n,(n%2==0?"ż":"��"),(n%3==0?"��":"����"));
	return 0;
}
