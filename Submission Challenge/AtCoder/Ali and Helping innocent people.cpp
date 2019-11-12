#include <iostream>
using namespace std;
main () {
	char s[10];
	cin>>s;
	if (((s[0] + s[1]) % 2 != 0) && ((s[3] + s[4]) % 2 != 0) && ((s[4] + s[5]) % 2 != 0) && ((s[7] + s[8]) % 2 != 0)) {
		if (s[2] =='A' || s[2] == 'E' || s[2] =='I' || s[2] == 'O' || s[2] =='U' || s[2] == 'Y') {
			cout<<"Invalid";	
		} else {
			cout<<"Valid";
		}
	} else {
		cout<<"Valid";
	}
}


