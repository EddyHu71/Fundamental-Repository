#include <iostream>
using namespace std;
main () {
	int n, i = 0;
	cin>>n;
	string s, subs ="";
	while(n--) {
		cin>>s;
		while (i < s.length() -1) {
			if (s[i] == s[i+1]) {
				subs+= s[i];
				i+=2;
			} else {
				subs+=s[i];
				i++;
			}
			
		}
		cout<<subs+s[s.length()-1]<<endl;
		subs="";
		i=0;
	}
}
