#include <iostream>
using namespace std;
main () {
	int n, m, k;

	cin>>n>>m>>k;
	long long a[n], b[m];
	for (int i=0;i<n;i++) {
		cin>>a[i];
	}
	for (int i=0;i<m;i++) {
		cin>>b[i];
	}
	int jlh = 0;
	int hitung = 1;
	int buku = 0, i = 1, index1 = 0, index2 = 0;
	while (jlh < k && i < (n+m)) {
		if (i % 2 == 0) {
			jlh+=b[index1];
			buku++;
			cout<<jlh<<" "<<index1<<endl;
			index1++;
		} else {
			jlh+= a[index2];
			buku++;
			cout<<jlh<<" "<<index2<<endl;
			index2++;
		}
		i++;
	}
	cout<<buku<<endl;
	
}
