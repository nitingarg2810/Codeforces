#include<iostream>

using namespace std;

int main()
{
	int avg, x, n;
	cin >> x >> avg;
	n=avg+1-x;
	int sum=0;
	for(int i=0;i<n-2;i++)
	{
		sum=sum+i;
	}		
	cout << avg*n- x - sum << endl;
	return 0;
}




