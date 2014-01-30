#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int i, cnt=0;
	char str[1000000];
	cin >> str;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='1')
		{
			cnt = cnt + 2;
		}
		if(str[i]=='0' && cnt>=1)
		{
			cnt = cnt - 1;	
		}
	}
	cout << cnt << endl;;
return 0;
}


