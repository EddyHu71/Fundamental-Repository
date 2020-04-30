#include<bits/stdc++.h>
using namespace std;
main () {
	int N, a = 1, t, z, res = 0;
	cin>>N;
	while (N--) {
		cin>>t>>z;
		int arr[t];
		for (int i=0;i<t;i++) {
			cin>>arr[i];
		}
		int first = arr[0];
		int x = 0;
		do {
			res+=first;
		} while (res <= z - first);
		cout<<"Case #"<<a<<": "<<res<<endl;
		a++;
		res = 0;
	}
}
