#include <iostream>
using namespace std;
main () {
	int a, b, c;
	cin>>a>>b>>c;
	int hasil = (a * b) / 100;
	int hasil1 = ((a - hasil) * c) / 100;
	cout<<a-hasil+hasil1<<endl;
}
