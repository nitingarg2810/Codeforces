#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(int argc, char *argv[])
{
  int T,N,K,s,f,p;
  cin>>T;
  while(T--){
    map<int,vector <pair<int,int> > > arr;
    scanf("%d %d",&N,&K);
    while(N--){
      scanf("%d %d %d",&s,&f,&p);
      arr[p].push_back(make_pair(f,s));
    }
    int count = 0;
    for(auto& i:arr) {
      int flag = 0;
      sort(i.second.begin(),i.second.end());
      for(auto& v:i.second) {
        if (v.second >= flag) {
          count++;
          flag = v.first;
        }
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
