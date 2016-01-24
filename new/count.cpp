#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
#define max (500+5)
typedef pair<int , int > p;
p t[max * max];
int main()
{
  int test;
  cin>>test;
  while(test--)
  {
      int n,val,ans=0;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              cin>>val;
              t[val]=p(i,j);
          }
      }
      for(int i=2;i<=n*n;i++)
      {
          ans+=abs(t[i].first - t[i-1].first);
          ans+=abs(t[i].second - t[i-1].second);
      }
      cout<<ans<<endl;
  }
    return 0;
}
