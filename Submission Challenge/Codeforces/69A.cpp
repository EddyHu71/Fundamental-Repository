#include <iostream>
using namespace std;
main () {
	int n, a, b, c, x = 0, y = 0, z = 0;
	cin>>n;
	
	while (n--) {
		cin>>a>>b>>c;
		x+=a;
		y+=b;
		z+=c;
	}
	
	if (x|| y ||z ) {
		cout<<"NO"<<endl;
	} else {
		cout<<"YES"<<endl;
	}
}