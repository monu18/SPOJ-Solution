#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 ll t;
 cin>>t;
 while(t--)
 {
  ll x,y;
  cin>>x>>y;
  if(y > x or y < (x - 2) or y == x - 1)
  {
   cout<<"No Number\n";
   continue;
  }
  if( (x&1) && (y&1))
  {
   cout<<x+y-1<<"\n";
   continue;
  }
  cout<<x+y<<"\n";
 }
 return 0;
}
