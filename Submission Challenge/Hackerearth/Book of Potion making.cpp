#include <iostream>
using namespace std;
main () {
	string a;
	int hasil = 0;
	cin>>a;
	for (int i=0;i<10;i++) {
		hasil= hasil + ((a[i] - '0') * (i +1));
	}
	if (hasil % 11 == 0) {
		cout<<"Legal ISBN"<<endl;
	} else {
		cout<<"Illegal ISBN"<<endl;
	}
}
