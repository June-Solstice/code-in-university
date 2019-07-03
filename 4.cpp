#include <stdio.h>
int main()
{
	int i,j;
	double sum[20]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},n=0;
	for(i=0;i<20;i++)
		for(j=i+1;j>1;j--)
			sum[i]=sum[i]*j;
	for(i=0;i<20;i++)
		n=sum[i]+n;
	printf("%lf\n",n);
	return 0;
}
