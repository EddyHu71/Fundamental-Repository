#include<bits/stdc++.h>
using namespace std;
set<int>level;
main(){
	int n;
	cin>>n;
	int p,q, r;
	cin>>p;
	for (int i=1;i<=p;i++) {
		cin>>q;
		level.insert(q);
	}
	cin>>r;
	for (int i=1;i<=r;i++) {
		cin>>q;
		level.insert(q);
	}
	if(level.size()==n)
	cout<<"I become the guy."<<endl;
	else cout<<"Oh, my keyboard!"<<endl;
}
