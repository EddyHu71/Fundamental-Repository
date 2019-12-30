#include <iostream>
using namespace std;
main () {
	int n, sum1 = 0, sum2 = 0;
	cin>>n;
	for (int i=1;i<=n;i++) {
		sum1 += i;
		if (sum1 >= n) {
			cout<<"Patlu"<<endl;
			break;
		} 
		sum2 += i * 2;
		if (sum2 >= n){
			cout<<"Motu"<<endl;
			break;
		}
	}
}
