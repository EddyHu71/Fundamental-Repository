#include <iostream>
using namespace std;
main () {
	
	int a, b, c;
	cin>>a>>b>>c;
	if (a == b && b == c && a == c) {
		cout<<"No"<<endl;
	} else 
	if (a == b) {
		if (b != c) {
			cout<<"Yes"<<endl;
		}
	} else if (b == c) {
		if (c != a) {
			cout<<"Yes"<<endl;
		}
	} else if (a == c) {
		if (a != b) {
			cout<<"Yes"<<endl;
		}
	} else {
		cout<<"No"<<endl;
	}
}
