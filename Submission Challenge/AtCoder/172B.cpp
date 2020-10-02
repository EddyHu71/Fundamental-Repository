#include <iostream>
using namespace std;
main () {
	string s, t;
	cin>>s>>t;
	int kerja = 0;
	for (int i=0;i<s.length();i++) {
		if (s[i] != t[i]) {
			kerja++;
		}
	}
	cout<<kerja<<endl;
}
