#include <iostream>
using namespace std;
main () {
	long long a, b, c, d;
	cin>>a>>b>>c>>d;
	
//	int res = a / d;
//	int res1 = c / b;
//	int sisa = a % d;
//	int sisa1 = c % b;
	while ((a - d) >= 0 && (c - b) >= 0) {
		a-=d;
		c-=b;
//		if (a <= 0) {
//			break;
//		} else
//		if (c <= 0) {
//			break;
//		} 
		//cout<<a<<" "<<c;
	}
	//cout<<sisa<<" "<<sisa1<<endl;
	//cout<<res<<" "<<res1<<endl;
	cout<<a<<" "<<c<<endl;
	if (a > c) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
}
