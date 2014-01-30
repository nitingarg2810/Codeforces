#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,a,b,i=0;
	int sum1=0, sum2=0;
	int x[100], y[100], count=0;
	cin >> n;
	while(n--)
	{
		cin >> x[i] >> y[i];
		if(x[i]%2!=0 && y[i]%2!=0)
		{
			count++;
		}
		sum1 = sum1 + x[i];
		sum2 = sum2 + y[i];
		i++;
	}
	if(sum1%2==0 && sum%2==0)
		{
			cout << '0';
		}
	else if(sum1)
	{
		cout << count << endl;	
	}
		 
}
