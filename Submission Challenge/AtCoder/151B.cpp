#include <iostream>
using namespace std;
main () {
	int n, k, m, temp = 0;
	cin>>n>>k>>m;
	int a[n];
	for (auto i=1;i<n;i++) {
		cin>>a[i];
		temp+=a[i];
	}
	if (k >= (m*n) - s) {
		if ((m * n) - temp > 0) {
			cout<<(m*n) - temp<<endl;
		} else {
			cout<<0<<endl;
		}
	} else {
		cout<<-1<<endl;
	}
}
