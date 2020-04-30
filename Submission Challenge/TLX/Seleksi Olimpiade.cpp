#include <iostream>
using namespace std;'

main () {
	int T, n, m, res1 = 0, res2 = 0, res3 = 0;
	string z;
	cin>>T;
	while (T--) {
		cin>>n>>m;
		cin>>z;
		int a[n], b[n], c[n], res[n];
		string d[n];
		for (int i=0;i<n;i++) {
			cin>>d[i]>>a[i]>>b[i]>>c[i];
			res[i]+=a[i]+(b[i]*3)+(c[i]*5);
		}
		int maks = res[0];
		int rescek[m];
		int valid = 0;
		int maksi = 0;
		int val[m];
		for (int i = 1;i<n;i++) {
			if (i != n-1) {
				if (maks < res[i]) {
					maksi = i;
				}
			} else {
				
			}
		}
		
}
