#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll n1=n;
    ll ans=0;
    ll i=1;
    while(n/pow(5,i)>0)
    {

        ans=(ans+(int)(n/pow(5,i)));
        i++;

    }
    cout<<ans<<"\n";

  }
  return 0;
}
