#include <iostream>
using namespace std;
main () {
	string s, t;
  	bool salah = false;
  	cin>>s>>t;
  	int panjang1 = s.length();
  	int panjang2 = t.length();
  if (panjang1 + 1 == panjang2) {
	  	for (int i=0;i<panjang1;i++) {
		    if (s[i] != t[i]) {
		    	salah = true;
		    }
		}
	} else {
		salah = true;
	}
	
	if (salah) {
		cout<<"No"<<endl;
	} else {
		cout<<"Yes"<<endl;
	}
}
