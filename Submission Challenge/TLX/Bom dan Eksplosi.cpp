#include <iostream>
#include <math.h>
using namespace std;
main () {
	int n, m, r;
	cin>>n>>m>>r;
	int a = ceil(n / (2*r+1));
	int b = ceil(m / (2*r+1));
	cout<<min(a, b)<<endl;
}
