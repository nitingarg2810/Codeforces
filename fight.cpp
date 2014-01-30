#include <stdio.h>
#include <math.h>
long int a[1000001];
 
int main()
{
	long int t,i,j;
	scanf("%ld",&t);
	
	a[0]=1;
	a[1]=1;
	for(i=2;i<=1001;i++)
	{
		if(a[i]==0)
		{
			for(j=i*i;j<=1000001;j=j+i)
				a[j]=1;
		}
	}
 
	
	while(t--)
	{
		int flag=0;
		double q;
		long long int p;
		scanf("%lld",&p);
		q=sqrt(p);
		if(q==floor(q))
		{
			if(a[(int)q]==0)
				flag=1;
		}
		if(flag==1)
			printf("YES\n");
		else if(flag==0)
			printf("NO\n");
	}
	return 0;
} 
