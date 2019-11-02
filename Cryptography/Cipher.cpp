#include <iostream>
using namespace std;
int main()
{
	string x, result;
	int code;
	cin>>x;
	cin>>code;
	for (int i=0;i<x.length();i++) {
		if ((x[i] >= 'a' && x[i] <= 'z')) {
			if (isupper(x[i])) {
			result+= char(int(x[i]+code - 65) %26 + 65); 
			} else {
				result+= char(int(x[i] + code - 65) % 26 + 97);
			}
		} else {
			result+= x[i];
		}

	}
	
	cout<<result<<endl;
}
