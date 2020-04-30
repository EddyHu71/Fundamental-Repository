#include <iostream>
using namespace std;
main () {
	int n;
	cin>>n;
	int a[n], b[n], hitung[2] = {};
	for (int i=0;i<n;i++) {
		cin>>a[i];
		if (a[i] == 0) {
			hitung[0]++;
		} else if (a[i] == 1) {
			hitung[1]++;
		} else if (a[i] == 2) {
			hitung[2]++;
		}
	}
	int val = 0;
	for (int i=0;i<n;i++) {
		int hit = 0;
		int init = hitung[val];
		b[i] = init;
		init--;
		if (init == 0 && val <= 2) {
			hitung[val++];
		}
	}
	for (int i=0;i<n;i++) {
		cout<<b[i]<<" ";
	}
}
