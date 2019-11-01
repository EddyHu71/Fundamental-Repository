#include <iostream>
using namespace std;
main () {
	long long a, b;
	cin>>a>>b;
	a = (a+1) / 2;
	if (b > a) {
		cout<<2*(b-a);
	} else {
		cout<<2*b-1;
	}
}
