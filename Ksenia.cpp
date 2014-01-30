#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
char a[1000005],a1[1000005];
int main(){
    int i,j,l;
    string x,y;
    scanf("%s%s",a,a1);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]=='|')
            break;
        x+=a[i];
    }
    i++;
    for(;i<l;i++)
        y+=a[i];
    for(i=0;a1[i];i++)
        if(x.length()<=y.length())
            x+=a1[i];
        else y+=a1[i];
    if(x.length()!=y.length()) puts("Impossible");
    else printf("%s|%s\n",x.c_str(),y.c_str());
}
