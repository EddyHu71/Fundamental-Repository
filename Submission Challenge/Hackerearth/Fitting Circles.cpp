#include <iostream>
using namespace std;
main () {
	int T, a, b;
	cin>>T;
	while (T--) {
		cin>>a>>b;
		if (a > b) {
			cout<<a/b<<endl;
		} else {
			cout<<b/a<<endl;
		}
	}
}
