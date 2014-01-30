#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
char s[200];

int main()
{
	while(gets(s))
	{
		bool flag = false;
		for(int i=0;s[i];i++)
		{
			if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
			{
				flag = true;
				break;	
			}	
		}
		if(flag)
		{
			cout << "YES" << endl;	
		}	
		else
		{
			cout  << "NO" << endl;	
		}
	}
	return 0;
}
