#include <iostream>
using namespace std;
main () {
	int N, R;
	cin>>N>>R;
	if (N < 10) {
		cout<<R+(100*(10 - N))<<endl;
	} else {
		cout<<R<<endl;
	}
}
