#include <iostream>
using namespace std;

int main () {
	int x = 0, y = 0;
	string s;
	cin>>s;
	for (int i=0;i<s.length();i++) {
		if (s[i] == 'R') {
			x++;
		} else if (s[i] == 'L') {
			x--;
		} else if (s[i] == 'U') {
			y++;
		} else if (s[i] == 'D') {
			y--;
		}
	}
	cout<<x<<" "<<y<<endl;
	return 0;
}
