#include<bits/stdc++.h>
using namespace std;
class OperateString {
	std::string s;
	int x;
public:
	std::string operate(std::string s, vector<int> moves) {
		int mutlak = abs(x);
		std::string realstring, stringtemp1, stringtemp2;
		for (int i=0;i<moves.size();i++) {
			if (moves[i] > 0) {
			realstring=s;
			stringtemp1 = s.erase(0, mutlak);
			s = realstring;
			stringtemp2 = s.erase(mutlak, s.length());
			return stringtemp1+stringtemp2;
		} else if (moves[i] < 0) {
			realstring=s;
			stringtemp1 = s.substr(x-1, x);
			stringtemp2 = s.erase(x, s.length());
			return stringtemp1+stringtemp2;
		} else {
			return s;
		}
		}
	}	
};
int main () {
	int temp;
	std::string x;
	cin>>x;
	OperateString op;
    vector<int> z;
	while (cin>>temp) {
        z.push_back(temp);

	}
	cout<<op.operate(x, z);
	return 0;
}
