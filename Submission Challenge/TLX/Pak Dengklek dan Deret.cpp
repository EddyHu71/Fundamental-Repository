#include <iostream>
using namespace std;
main () {
	int a;
	cin>>a;
	for (int i=1;i<=a;i++) {
		if (i == a) {
			cout<<i<<endl;
		} else {
			cout<<i<<"+";
		}
	}
}
