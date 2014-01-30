#include<stdio.h>
int main()
{
    int a,b,i,max=0,n,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        x-=a;
        x+=b;
        if(x>max) max=x;
    }
    printf("%d\n",max);
    return 0;
}
