#include<bits/stdc++.h>
using namespace std;

main () {
	int a, b;
	cin>>a>>b;
	int result = 0, result1 = 0;
	result = (a * 100) / 8;
	result1 = (b * 10);
	if (abs(result1 - result) < 6) {
		cout<<max(result, result1)<<endl;
	} else if ((result1 - result) > 5 && (result1 - result) < 10) {
		cout<<result1+1<<endl;
	} else if ((result - result1) > 5 && (result - result1) < 10) {
		cout<<result+1<<endl;
	}
	else {
		cout<<-1<<endl;
	}
}
