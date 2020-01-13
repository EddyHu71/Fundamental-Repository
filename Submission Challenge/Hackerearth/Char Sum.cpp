#include <iostream>
using namespace std;
main () {
	int jumlah = 0;
	string a;
	cin>>a;
	for (int i=0;i<a.length();i++) {
		jumlah+= (a[i] - 96);
	}
	cout<<jumlah<<endl;
}
