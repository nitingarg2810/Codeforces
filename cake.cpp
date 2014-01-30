#include<iostream>
using namespace std;

int main()
{
	int t, arr[9], temp=0;
	cin >> t;
	while(t!=0)
	{
		for(int i=0;i<9;i++)
		{
			cin >> arr[i];
			int min = arr[0];
			if(arr[i]<min)
			{
				min=arr[i];	
			}
			
		}
		t--;
	}
	cout << min << endl;
}
