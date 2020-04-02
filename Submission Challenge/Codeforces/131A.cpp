
#include <bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin>>s;
	t=s;
	for(int k=1;k<s.size();k++){
		t[k]=tolower(s[k]);
		if(t[k]==s[k]){cout<<s;return 0;}
	}
	if(t[0]!=toupper(t[0]))t[0]=toupper(t[0]);
	else t[0]=tolower(t[0]);
	cout<<t;
}