#include <iostream>
#include <algorithm>
using namespace std;
main () {
	int a, b;
	cin>>a>>b;
	for (int i=0;i<a;i++) {
		if ((i+1) % b == 0) {
			if (i == 0) {
				cout<<"* ";
			} else if (i == a - 1) {
				cout<<" *";
			}
		} else {
			if (i == 0) {
				cout<<i+1<<" ";
			} else if (i == a - 1 ) {
				cout<<i+1;
			} else {
				cout<<" "<<i+1<<" ";
			}
		}
	}
}
