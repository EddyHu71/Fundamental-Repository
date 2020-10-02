#include <iostream>
using namespace std;
main () {
	long long x;
	cin>>x;
	long long sum = 100, year = 0;
	while (sum < x) {
		sum += (sum * 0.01);
		year++;
	}
	cout<<year<<endl;
}
