#include <iostream>
using namespace std;

main () {
	int hitung=0;
	unsigned long long int N, bagi = 10;
	long long temp = 1;
	cin>>N;
	if (N < 2) {
		cout<<1<<endl;
	} else {
		for (int i=2;i<=N;i+=2) {
			temp *= i;
			if (temp % bagi == 0) {
				hitung++;
				bagi = bagi * 10;
			}
		}	
	}
	cout<<hitung<<endl;
}
