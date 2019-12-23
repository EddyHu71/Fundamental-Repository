#include <iostream>
using namespace std;
main () {
	int a, b, c, d, e, f, g;
	bool valid1 = true, valid2 = true;
	char y, z;
	chars[10];
	cin>>a>>b>>y>>c>>d>>e>>z>>f>>g;
	if (y == 'A' || y == 'E' || y == 'I' || y == 'O' || y == 'U' || y == 'Y') {
		valid1 = false;
	} 
	if ((a + b) % 2 != 0 && (d+e) % 2 != 0 && (f + g) % 2 != 0) {
		valid2 = false;
	}
	
	if (valid1 == true && valid2 == true) {
		cout<<"Valid"<<endl;
	} else {
		cout<<"Invalid"<<endl;
	}
}
