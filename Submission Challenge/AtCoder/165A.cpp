#include <iostream>
using namespace std;
main () {
	int k, a, b;
	cin>>k>>a>>b;
	string s = "NG";
	int res = a;
	for (int i=a;i<=b;i++) {
		if (i % k == 0) {
			cout<<"OK";
			return 0;
		}
	}
	cout<<"NG"<<endl;
}
