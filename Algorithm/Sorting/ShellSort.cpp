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
	for (int i=N/2;i>0;i/=2) {
		
		for (int j=i;j<N;j++) {
			
			int temp = a[i];
			
			for (int k = j;k>=i && a[j-i] > temp;j -= i) {
				a[j] = a[j-i];
				a[j] = temp;
			}
		}
	}
	
	for (int i=0;i<N;i++) {
		cout<<a[i]<<" ";
	}
}
