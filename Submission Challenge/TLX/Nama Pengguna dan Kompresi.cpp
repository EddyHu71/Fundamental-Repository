#include <iostream>
using namespace std;
main () {
	int n;
	string s;
	cin>>n;
	cin>>s;
	for (int i=0;i<n-1;i++) {
		if (s[i] != s[i+1]) {
			cout<<s[i];
		}
	}
	cout<<s[n-1]<<endl;
}
