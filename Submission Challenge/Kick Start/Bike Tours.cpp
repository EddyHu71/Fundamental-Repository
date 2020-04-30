#include<bits/stdc++.h>
using namespace std;
main () {
	int T, a, n = 1;
	cin>>T;
	while (T--) {
		cin>>a;
		int arr[a];
		for (int i=0;i<a;i++) {
			cin>>arr[i];
		}
		int peak = 0;
		for (int i=1;i<a-1;i++) {
			if (arr[i-1] < arr[i] && arr[i] > arr[i+1]) {
				peak++;
			}
		}
		cout<<"Case #"<<n<<": "<<peak<<endl;
		n++;
	}
}
