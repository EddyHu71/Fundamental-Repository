#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if (a%b == 0) {
		return b;
	}
	return gcd(b%a, a);
}

int gcd3(int a, int b, int c) {
	return gcd(gcd(a, b), c);
}
long long sumGCD(int z) {
	long long res = 0;
	for (int i=1;i<z+1;i++) {
		for (int j=1;j<z+1;j++) {
			for (int k = 1;k<z+1;k++) {
				res+=gcd3(i, j, k);
			}
		}
	}
	return res;
}
main () {
	int n;
	cin>>n;
	cout<<sumGCD(n)<<endl;
}
