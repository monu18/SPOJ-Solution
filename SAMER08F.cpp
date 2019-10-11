#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  for (size_t i = 0;; i++) {
    /* code */
    cin>>t;
    if (t==0) {
      /* code */
      break;
    }
    else
    {
      ll ans=0;
      for (size_t i = 1; i <= t; i++) {
        /* code */
        ans+=(i*i);
      }
      cout<<ans<<"\n";
    }
  }
  return 0;
}
