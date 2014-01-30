#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	char s[105];
	while(~scanf("%s",&s))
	{
		for(int i=0;s[i];i++)
		{
			if(s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] + 32;	 
			}	
		}
		
		for(int i=0;s[i];i++)
		{
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'y')
				{
					continue;
				}	
				else
				{
					cout << "." << s[i];	
				}
		}	
		cout << "\n";
	}
	return 0;
}

