#include<iostream>
#include<stdio.h>
#include<math.h>
#define M 1000000007
using namespace std;
int count(int number) {
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
 
int main(){
	int t,a,b;
	long long sum1 = 0,sum2 = 0,tot = 0;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&a,&b);
		int c_a = count(a);
		int c_b = count(b);
		if(c_a == c_b){
			sum = (b*(b+1)) / 2;
			a--;
			sum = sum - (a*(a+1))/2;
			sum = sum%M;
			printf("%d\n",sum);
		}
		if(c_a == 1){
			a--;
			tot = 45-a*(a+1);
			tot = tot/2;
			a++;
			
		}
		else{
			int arr[] = {10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
			while(a<=b){
				int n = --arr[c_a-2];
				sum2 = n*(n+1);
				sum2 = sum/2;
				a--;
				sum1 = a*(a+1);
				sum1 = sum2/2;
				a++;
				tot = (sum2-sum1)%M;
				tot = (tot * c_a) % M;
				a = arr[c_a-2];
				
				sum1 = 0;
				sum2 = 0;
				
				if(c_b!=c_a+1)
				c_a++;
				else{
					sum2 = b*(b+1)/2;
					sum1 = a * (a+1)/2;
					tot = tot+((sum2 - sum1)% M); 
					printf("%d\n",tot);
				}
			}
		}
		
	printf("%lld\n",tot);
	}
}
