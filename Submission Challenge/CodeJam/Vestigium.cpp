#include <iostream>
using namespace std;
main () {
	int T, N, k, r, c;
	cin>>T;
	while (T--) {
		cin>>N;
		int a[N][N];
		for (int i=0;i<N;i++) {
			for (int j=0;j<N;j++) {
				cin>>a[i][j];
				if (i == j) {
					k+=a[i][j];
				}
			}
		}
	}
}
