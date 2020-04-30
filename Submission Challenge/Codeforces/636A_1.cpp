#include <iostream>
#include <math.h>
using namespace std;
main () {
	long long T, n, x, d = 3, res = 3, k = 2;
	cin>>T;
	while (T--) {
		cin>>n;
		d = 3, res = 3, k = 2;
		while (n % res != 0) {
			res+=pow(2, k++);
		}
		cout<<n/res<<endl;	
	}
	
}
