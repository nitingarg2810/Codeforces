#include <iostream>
#include <algorithm>
  using namespace std;
  
  int n,h[30],a[30];
  
  int main()
  {
     int con=0;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>h[i]>>a[i];
     }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(i==j) continue;
             if(h[i]==a[j]) con++;
         }
     }
     cout<<con;
     return 0;
}
