#include <iostream>
#include <algorithm>
using namespace std;
main () {
	int N, j;
	cin>>N;
	int a[N];
	for (int i=0;i<N;i++) {
		cin>>a[i];
	}
	//Ascending Order
	for (int i=1;i<N;i++) {
		int key = a[i]; //temporary data
		j = i-1;
		while (j >= 0 && a[j] >= key) {
			swap(a[j], a[j+1]);
			j--;
		}
		a[j+1] = key;
	}
	cout<<"Many data that will be inserted : "<<N<<endl;
	cout<<"Ascending order : ";
	for (int i=0;i<N;i++) {
		cout<<a[i]<<" ";
	} // print the ascending data
	//Descending Order
	for (int i=1;i<N;i++) {
		int key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] <= key) {
			swap (a[j], a[j+1]);
			j--;
		}
		a[j+1] = key;
	}
	cout<<endl;
	cout<<"Descending order : ";
	for (int i=0;i<N;i++) {
		cout<<a[i]<<" ";
	}
}
