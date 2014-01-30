#include<iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	long long int n, m ,a;
	cin  >> n >> m >> a;
	long long int x = (n%a == 0 ? n/a : n/a+1);
	long long int y = (m%a == 0 ? m/a : m/a+1);
	cout << x*y << endl;
	return 0;
}
