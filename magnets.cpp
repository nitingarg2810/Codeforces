#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n, count=1;
	cin >> n;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin >> s[i];
		if(i>0&&s[i-1]!=s[i])
		{
			count++;	
		}	
	}
	cout << count << endl;
	return 0;
}
