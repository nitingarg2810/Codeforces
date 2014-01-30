#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int T,c;
	scanf("%d",&T);
	while(T--)
	{
		long L,D,S,C,m,i;
		scanf("%d %d %d %d",&L,&D,&S,&C);
		m=S;
		if(m>=L)
		{
			c++;
			break;
		}
		for(i=0;i<D-1;i++)
		{
			m=m*(1+C);	
			if(m>=L)
			{
				c++;
				break;
			}
		}		
		if(c!=0)
		printf("ALIVE AND KICKING");
		else
		printf("DEAD AND ROTTING");
	}
	return 0;
}
