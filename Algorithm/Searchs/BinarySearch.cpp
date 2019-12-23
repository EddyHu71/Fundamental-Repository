#include <iostream>
using namespace std;
main () {
	int N, find, index = 0; //declare how many data, data that you want to search it and i-th index in your array
	bool gotcha = false; //declare boolean variable for sign if you get the data or not
	cin>>N;
	int a[N];
	for (int i=0;i<N;i++) {
		cin>>a[i];
	}
	cin>>find;
	int low = 0; // the lowest index
	int mid = N / 2; //the middle index
	int high = N; // the highest index
	while (low <= high) {
		if (a[mid] < find) {
			find = a[mid];
			low = mid + 1;
			gotcha = false;
			index = low;
		} else if a[mid] > find){
			find = a[mid];
			high = mid -1;
			gotcha = false;
			index = high;
		} else {
			find = a[mid];
			gotcha = true;
			index = mid;
		}
	}
	if (gotcha) {
		cout<<"Data that you want to search "<<find<<" that appear in the index of "<<index<<endl;
	} else {
		cout<<"Data that you want to search "<<find><" that doesn't appear in your array"<<endl;
	}
}
