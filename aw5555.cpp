#include<stdio.h>
int main()
{
	printf("dayin");
	int n;
	scanf("%d",&n);
	int k = n % 10;
	if(k>=5)
	{
		n +=10-k;
	}
	else n-=k;
	printf("%d\n",n );

	return 0;
}