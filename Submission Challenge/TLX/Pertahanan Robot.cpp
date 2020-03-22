#include <iostream>
using namespace std;

int main () {
	int hori = 0, vert = 0;
	string s;
	cin>>s;
	for (int i=0;i<s.length();i++) {
		if (s[i] == 'R') {
			hori++;
		} else if (s[i] == 'L') {
			hori--;
		} else if (s[i] == 'U') {
			vert++;
		} else if (s[i] == 'D') {
			vert--;
		}
	}
	cout<<vert<<" "<<hori<<endl;
	return 0;
}
