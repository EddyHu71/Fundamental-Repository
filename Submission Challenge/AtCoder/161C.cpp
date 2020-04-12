#include<bits/stdc++.h>
using namespace std;
main () {
	long long n, k, ans;
	cin>>n>>k;
	if (n% k == 0) {
		ans = 0;
	}
	else if (k > n) {
		ans = min(n, k-n);
	} else {
		ans = n %k;
		n%=k;
		long long mn = ans+1;
		while (ans < mn) {
			mn =ans;
			ans = abs(ans-k);
		}
		ans = min(ans, mn);
	}
	
	cout<<ans<<endl;
}
