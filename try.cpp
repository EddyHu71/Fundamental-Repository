#include <iostream>
using namespace std;
main () {
	int a[2];
	for (int i=0;i<3;i++) {
		cin>>a[i];
	}
	
	for (int i=2;i>=0;i--) {
		cout<<a[i]<<endl;
	}
}
