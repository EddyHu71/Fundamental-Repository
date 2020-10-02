#include<bits/stdc++.h>
using namespace std;
//   int num = 63972, rev = 0;
//   while(num > 0) { 
//      rev = rev*10 + num%10; 
//      num = num/10; 
//   } 
//   cout<<"Reverse of number is "<<rev;
main () {
	int t, a;
	cin>>t;
	vector<int> z;
	while (t--) {
		cin>>a;
		int bagi = 1, res=0;
		while (a > 0) {
			res = a%10;
			if (res > 0) {
				z.push_back(res * bagi);
			}
			a/=10;
			bagi*=10;
		}
		cout<<z.size()<<endl;
		for (int i=0;i<z.size();i++) {
			if (i != z.size() -1 ) {
				cout<<z[i]<<" ";
			} else {
				cout<<z[i]<<endl;
			}
		}
		z.clear();
		bagi = 1;
		res = 0;
	}
}
