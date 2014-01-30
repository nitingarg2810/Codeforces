#include<iostream>
#include<string>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		string s;
		cin >> s;
		int L = s.size();
		if(L<=10)
		cout << s << endl;
		else
		cout << s[0] << L-2 << s[L-1] << endl;
	}
	return 0;
}
