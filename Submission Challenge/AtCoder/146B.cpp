#include <iostream>
using namespace std;

int main () {
	string s, result="";
	int n;
	cin>>n;
	cin>>s;
	
	for (int i=0;i<s.length();i++) {
		result+=char(int(s[i])+ n- 65) % 26 + 65;
	}
	cout<<result<<endl;
}
