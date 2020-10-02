#include <iostream>
using namespace std;
main () {
	int x, y;
	cin>>x>>y;
	while (x > 0) {
		if (y % 4 == 0 && y > 4) {
			y-=4;
		}
		else if (y >= 2) {
			y-=2;
		}
		x--;
	}
	if (y == 0) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
}
