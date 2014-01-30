#include<iostream>
#include<string>
#include<cstring>

using namespace std;
string s;
 
int main()
{
	int n, i ,v;
	cin >> n;
	v=0;
	for(i=0;i<n;i++)
	{
		cin >> s;
		if(s[0] == '+' || s[2] == '+')
		v++;
		else
		v--;
	}
	cout << v << endl;
	return 0;
}
