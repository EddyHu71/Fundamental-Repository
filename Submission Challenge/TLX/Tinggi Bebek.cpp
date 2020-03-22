#include <iostream>
#include <algorithm>
using namespace std;
main () {
	int a[3];
	for (int i=0;i<3;i++) {
		cin>>a[i];
	}
	sort(a, a+3);
	cout<<a[0]<<endl<<a[2]<<endl<<a[1]<<endl;
}
