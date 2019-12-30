#include <iostream>
using namespace std;
main () {
	bool flag = true;
	int z;
	cin>>z;
	string s;
	cin>>s;
	for (int i=0;i<s.length();i++) {
		if (s[i] == '.') {
			s[i] = 'B';
		}
		if (s[i] == 'H') {
			if (s[i+1] == 'H') {
				flag = false;
			}
		}
	}
	if (flag) {
		cout<<"YES"<<endl;
		cout<<s<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
