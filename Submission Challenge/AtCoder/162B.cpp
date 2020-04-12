#include <iostream>
using namespace std;
main () {
	 long long n, res = 1;
	cin>>n;
	for (long long i=2;i<=n;i++) {
		if (i % 3 == 0 || i % 5 == 0) {
		} else {
			res+=i;
		}
	}
	cout<<res<<endl;
}
