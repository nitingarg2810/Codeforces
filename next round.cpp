#include<iostream>

using namespace std;

int main()
{
	int arr[55];
	int n,k,max;
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(i+1==k)
		max=arr[i];
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=max && arr[i]>0)
		count++;
	}
	cout << count;
	return 0;
}
