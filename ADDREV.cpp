#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ulta(ll x)
{
  ll re=0;
  while(x>0)
  {
    re*=10;
    re+=(x%10);
    x/=10;
  }
  return re;
}
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll a,b;
    cin>>a>>b;
    cout<<ulta(ulta(a)+ulta(b));
    cout<<"\n";
  }
  return 0;
}
