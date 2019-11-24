#include <iostream>
using namespace std;
main () {
	int N;
	cin>>N; //many of data
	int a[N]; // array of data
	
	for (int i=0;i<N;i++) {
		cin>>a[i];
	}
	//shell sort operation
	for (int i=N/2;N>0;N/=2) {
		int temp = a[i];
		while (int j > 0 && temp < a[j]) {
			j--;
		}
	}
}
