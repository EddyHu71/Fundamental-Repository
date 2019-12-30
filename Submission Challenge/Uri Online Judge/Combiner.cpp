#include <iostream>
using namespace std;
main () {
	int N;
	string a, temp="", b;
	cin>>N;
	while (N--) {
		cin>>a;
		cin>>b;
		temp+=a[0];
		temp+=b[0];
		for (int i=2;i<a.length() + b.length();i++) {
			if (i % 2 == 0) {
				temp+=a[i];
			} else {
				temp+=b[i];	
			}
		}
		cout<<temp<<endl;
		temp="";
		a="";
		b="";
	}
}
