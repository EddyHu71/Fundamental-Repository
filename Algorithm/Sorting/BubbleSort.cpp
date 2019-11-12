#include <iostream>
#include <algorithm>
using namespace std;
main () {
	int N, asc = 0, desc = 0;
	cin>>N; //many of data
	int a[N]; // array of data
	for (int i=0;i<N;i++) {
		cin>>a[i];
	}
	// Ascending
	for (int i=0;i<N-1;i++) {
		for (int j=0;j<N-i-1;j++) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
	cout<<"Many data will be sorted : "<<N<<endl;
	cout<<"Ascending order : ";
	for (int i=0;i<N;i++) {
		cout<<a[i]<<" ";
	}
	//Descending
	for (int i=0;i<N-1;i++) {
		for (int j=0;j<N-i-1;j++) {
			if (a[j] < a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
	cout<<endl;
	cout<<"Descending order : ";
	for (int i=0;i<N;i++) {
		cout<<a[i]<<" ";
	}
	
}
