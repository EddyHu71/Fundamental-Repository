#include <iostream>
using namespace std;
main () {
	int N;
	cin>>N;
	int a[N];
	for (int i=0;i<N;i++) {
		cin>>a[i];
	}
	
	for (int i=0;i<N;i++) {
		int minimun = i;
		for (int j=i+1;j<N;j++) {
			if (a[j] < a[minimun]) {
				minimun = j;	
			}
			int temp = a[i];
			a[i] = a[minimun];
			a[minimun] = temp;
		}
	}
	
	for (int i=0;i<N;i++) {
		cout<<a[i]<<" ";
	}
}
