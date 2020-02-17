#include <iostream>
using namespace std;
main () {
	int N, denied = 0;
	cin>>N;
	int a[N];
	for (int i=0;i<N;i++) {
		cin>>a[i];
		if (a[i] % 2 == 0) {
			if ((a[i] % 3 != 0) && (a[i] % 5 != 0)) {
				denied++;
			}
		}
		
	}
	if (denied > 0) {
		cout<<"DENIED"<<endl;
	} else {
		cout<<"APPROVED"<<endl;
	}
}
