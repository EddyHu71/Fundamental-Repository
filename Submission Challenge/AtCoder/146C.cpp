#include "bits/stdc++.h"
#define hhh printf("hhh\n")
#define see(x) (cerr<<(#x)<<'='<<(x)<<endl)
using namespace std;
typedef long long ll;
typedef pair<int,int> pr;
inline int read() {int x=0,f=1;char c=getchar();while(c!='-'&&(c<'0'||c>'9'))c=getchar();if(c=='-')f=-1,c=getchar();while(c>='0'&&c<='9')x=x*10+c-'0',c=getchar();return f*x;}
 
const int maxn = 3e5+7;
const int inf = 0x3f3f3f3f;
const int mod = 1e9+7;
 
ll gcd(ll a, ll b) { return !b?a:gcd(b,a%b); }
 
int main() {
    ll a, b;
    cin>>a>>b;
    cout<<a*b/gcd(a,b)<<endl;
}
