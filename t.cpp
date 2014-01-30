#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t,count;
	char str[100000];
	cin>>t;
	while(t--)
	{
		cin>>str;
		count=0;
		for(int i=0;i<(strlen(str));i++)
		{
			if((str[i]=='1' && str[i+1]=='0' && str[i+2]=='1')|| (str[i]=='0' && str[i+1]=='1' && str[i+2]=='0'))
			{
				count++;
				break;
			}
		}
		if(count>0)
		cout<<"Good"<<endl;
		else
		cout<<"Bad"<<endl;
	}
return 0;
}
