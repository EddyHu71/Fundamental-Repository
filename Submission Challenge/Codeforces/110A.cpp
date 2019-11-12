#include <iostream>
using namespace std;
main () {
	string s;
	int n;
	cin>>s;
	for (int i=0;i<s.size();i++) {
		if (s[i]  == '4' || s[i] == '7') {
			n++;
		}
	}
		if (n == 4 || n == 7) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
}
