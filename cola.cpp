#include <iostream>
using namespace std;
string s[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
int n;
int main() {
	cin>>n;
	n--;
	int q=5;
	int cnt=1;
	for(;n>=q;){
		n-=q;
		q*=2;
		cnt*=2;
	}
	cout<<s[n/cnt]<<endl;
	return 0;
}
