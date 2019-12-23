#include <iostream>
#include <string>
using namespace std;
main () {
	int n;
	string a, b;
	cin>>n;
	cin>>a>>b;
	string temp = "";
	for (int i=0;i<n;i++) {
		temp += a[i];
		temp+= b[i];
	}
	cout<<temp<<endl;
}
