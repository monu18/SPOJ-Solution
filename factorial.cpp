#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n;
  cin>>n;
  ll ans=1;;
  for (size_t i = 1; i <= n; i++) {
    /* code */
    cout<<i<<" ";
    ans*=i;
  }
//  cout<<ans;
  return 0;
}
