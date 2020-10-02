#include <iostream>
#include <math.h>
using namespace std;
main () {
	long long a, b, c, d;
	cin>>a>>b>>c>>d;
	long long pangkat = pow(a, b);
	long long pangkat1 = pow(pangkat, c);
	cout<<pangkat<<" "<<pangkat1<<endl;
	cout<<pangkat1 % (d+1)<<endl;
}
