#include<bits/stdc++.h>
using namespace std;

main () {
	string s;
	while (getline(cin, s)) {
		s.replace(s.find("\""), 1, "''");
		cout<<s<<endl;
	}
}
