#include<iostream>

using namespace std;
#define M 10000000007
int countDigits(int number) {
    if (number < 10) {
        return 1;
    }
    int count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}
 

int main() {
    int t,l,r,count1=0;
    cin >>t;
    while(t--)
    {
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
	    	int numDigits = countDigits(i);
	    	count1=(count1+((i*numDigits)%M))%M;
    	}
	}
	cout<<count1<<endl;
    return 0;
}
