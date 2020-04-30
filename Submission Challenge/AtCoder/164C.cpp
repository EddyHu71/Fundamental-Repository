#include <bits/stdc++.h> 

using namespace std;

main () {
	int n;
	cin>>n;
	string a;
	unordered_set<string> s;
	// vector<string> s;
	for (int i=0;i<n;i++) {
		cin>>a;
		s.insert(a);
	}
	cout<<s.size()<<endl;
}
