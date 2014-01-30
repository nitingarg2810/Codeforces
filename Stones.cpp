#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	int len, cnt;
	char s[55];
	while(~scanf("%d%s", &len, &s))
	{
		char color=0;
		cnt = 0;
		for(int i=0;i<len;i++)
		{
			if(s[i] != color)
			{
				cnt++;
				color = s[i];
			}	
		}	
		printf("%d", len-cnt);
	}
	return 0;
}
