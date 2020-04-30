#include <iostream>
using namespace std;
main () {
	int n, m;
	cin>>n>>m;
	int a[m], res = 0;
	for (int i=0;i<m;i++) {
		cin>>a[i];
		res+=a[i];
	}
	int hasil = n - res;
	if (hasil >= 0) {
		cout<<hasil<<endl;
	} else {
		cout<<"-1"<<endl;
	}
}
