#include <stdio.h>  
#include <algorithm>  
using namespace std;  
#define maxn 100100  
int a[maxn];  
long long gcd(long long a,long long b)  
{  
    return b == 0 ? a : gcd(b,a%b);  
}  
int main()  
{  
    int n;  
    long long sum1 = 0;  
    long long sum2 = 0;  
    long long sum3 = 0;  
    scanf("%d",&n);  
    for(int i = 1; i <= n; i++) scanf("%d",&a[i]);  
    sort(a+1,a+1+n);  
    for(int i = 1; i <= n; i++)  
    {  
        sum3 += sum1;  
        sum1 += a[i];  
        sum2 += (long long)(i-1) * a[i];  
    }  
     
    long long up = sum1 + (sum2  - sum3)*2;  
    long long down = n;  
    long long m = gcd(up,down);  
    printf("%I64d %I64d\n",up/m,down/m);  
    return 0;  
}  
