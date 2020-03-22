#include <iostream>
using namespace std;

main () {
	string S;
	cin>>S;
	int hitung=0, hitung1=0;
	string res = "No";
	for (int i=0;i<S.length() - 2;i++) {
		if (S[i] == 'h') {
			hitung++;
			if (S[i+1] == 'i' && (i+2 != S.length() && (S[i+2] != 'h' || S[i+2] != 'i'))) {
				hitung1++;
			}
		}
	}
	cout<<hitung<<" "<<hitung1<<endl;
	if (hitung == hitung1) {
		res = "Yes";
	}
	cout<<res<<endl;
}
