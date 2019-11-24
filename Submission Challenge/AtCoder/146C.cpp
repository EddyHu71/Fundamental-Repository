#include <iostream>
using namespace std;
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
int main() {
    ll n, m, i, j, k;
    ll a,b,x;
    cin >> a >> b >> x;
    ll ret = 0;
    ll ten[11]={};
    ten[0]=1;
    for(i=1;i<11;i++){
        ten[i]=ten[i-1]*10;
    }
    for(i=1;i<=9;i++){
        //??
        ll now = x-b*i;
        if(now>0 && now/a>0){
            ret = max(ret,min(ten[i]-1,now/a));
        }
    }
    ll now = x-b*10;
    if(now>0 && now/a>0){
        ret = max(ret,min(ten[9],now/a));
    }
    cout << ret << endl;
    return 0;
}
