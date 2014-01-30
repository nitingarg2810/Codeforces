#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, m, k, res;
		scanf("%d%d%d", &n, &m, &k);
		if(n==1 && m==1 || n==1 && m==2 || n==2 && m==1)   res = 0;
		else if(n==1 || m==1) res = k;
		else res = k/2 + k%2;
		printf("%d\n", res);
	}
	return 0;
} 
