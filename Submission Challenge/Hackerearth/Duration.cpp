#include <iostream>
using namespace std;
main () {
	int N, sh, sm, eh, em, jam = 0;
	cin>>N;
	while (N--) {
		cin>>sh>>sm>>eh>>em;
		if (sm > em) {
			cout<<(eh-sh) -1<<" "<<60 - sm + em<<endl;
		} else {
			cout<<eh-sh<<" "<<em - sm<<endl;
		}
	}
}
