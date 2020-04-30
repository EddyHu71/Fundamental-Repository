#include <iostream>
using namespace std;

main () {
	int n, res = 0, res1 = 0;
	cin>>n;
	int i = 1;
	int arrs[n*n], arr[n*n];
	for (int i=1;i<=n*n;i++) {
		if (i == j) {
			arr[i] = i*-1;
		} else {
			arr[i] = i;
		}
		cout<<arr[i]<<" ";
		res+=arr[i];
	}
	for (int i=1;i<=n*n;i++) {
		if (i == j) {
			arrs[i] = i*1;
		} else {
			arrs[i] = i;
		}
		res1 += arrs[i];
	}
	cout<<max(res, res1)<<endl;
}
