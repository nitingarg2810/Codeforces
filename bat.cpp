#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long N, D, L[100000];
	int count=0;
	cin >> N >> D;
	for(int i =0;i<N;i++)
	{
		cin >> L[i];
	}
	sort(L,L+N);	
	for(int i=0;i<N-1;i++)
	{
		if(L[i+1]-L[i]<=D)
		{
			count = count + 1;
			i++;	
		}	
	}
	cout << count << endl;
	return 0;
}
