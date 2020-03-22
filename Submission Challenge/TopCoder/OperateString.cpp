#include<bits/stdc++.h>
using namespace std;
main () {
	string s, stringtemp1, stringtemp2, realstring="", result;
	cin>>s;
	int temp;
	vector<int> a;
	vector<string> res;
	while (cin>>temp) {
			realstring=s;
			stringtemp1 = s.erase(0, temp);
			s = realstring;
			stringtemp2 = s.erase(temp, s.length());
		if (temp > 0) {
			result = stringtemp1+stringtemp2;
			res.push_back(result);
		} else if (temp < 0) {
			result = stringtemp2 + stringtemp1;
			res.push_back(result);
		}
		temp=0;
	}
}
