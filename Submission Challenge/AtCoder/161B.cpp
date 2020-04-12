#include <iostream>
using namespace std;
main () {
	int n, m;
	cin>>n>>m;
	int a[n], res1 = 0;
	for (int i=0;i<n;i++) {
		cin>>a[i];
		res1+=a[i];
	}
	int ans = 0;
	int result = res1 * (0.25);
	for (int i=0;i<n;i++) {
		if (res1 <= a[i] * 4 * m) {
			ans++;
		}
	}
	if (ans >= m) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
}
