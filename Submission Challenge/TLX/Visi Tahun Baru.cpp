#include <iostream>
#include <string>
using namespace std;

main () {
	string s, t;
	cin>>s>>t;
	string res;
	int panjang1 = s.length();
	int panjang2 = t.length();
	int maks = max(panjang1, panjang2);
	for (int i=0;i<maks;i++) {
		if (tolower(s[i]) == tolower(t[i])) {
			res = "20/20";
		} else {
			res = "x_x";
		}
	}
	cout<<res<<endl;
}
