#include<bits/stdc++.h>
using namespace std;

main () {
	int n, z;
	cin>>n;
	while (n--) {
		cin>>z;
		cout<<(z/2) - 1 + (z % 2)<<endl;
	}
}
