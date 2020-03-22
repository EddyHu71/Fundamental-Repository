#include <iostream>
using namespace std;
main () {
	int n, a, b, result = 0;
	cin>>n>>a>>b;
	int res = a+b;
	if (a > 0) {
	 while (n > 0) {
		n-=res;
	 	if (n < a) {
	 		result+= n;	
		} else {
			result+=a;
		}
	 }
	} else if (a == 0){
		result = 0;
	}
	cout<<result<<endl;
}
