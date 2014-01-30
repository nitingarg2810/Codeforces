#include<iostream>

using namespace std;

int main()
{
	int t, N, i, M;
	cin >> t;
	for(i=0;i<t;i++)
	{
		cin >> N >> M;
		if(N<M || (M+(10*(M/500)))>N)
		{
			cout << "Sorry" << endl;
		}
		else
		{
			cout << N-M-(10*(M/500)) << endl;	
		}	
	}
	return 0;	
}
