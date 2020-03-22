#include<bits/stdc++.h>
using namespace std;
main () {
	int bird[5] = {};
	int T, max = 0, jenis = 0;
	int a[T];
	for (int i=0;i<T;i++) {
		cin>>a[i];
		bird[a[i]-1]++;
	}
	for (int i=0;i<5;i++) {
		if (max > bird[i]) {
			max = bird[i];
			jenis = i;
		}
	}
	cout<<jenis+1<<endl;
}
