#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    cin.tie(0);
    //ios::sync_with_stdio(false);
    ll n,ans=0;
    cin>>n;
    if(n%2==0){
        n/=2;
        while(n){
          n/=5;
          ans+=n; 
        }
    }
    cout<<ans<<endl;
    return 0;
}
