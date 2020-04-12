#include <iostream>
using namespace std;
main () {
	string s;
	int ada = 0;
	cin>>s;
	for (int i=0;i<s.length();i++) {
		if (s[i] == '7') {
			ada++;
		}
	}
	if (ada > 0) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
}
