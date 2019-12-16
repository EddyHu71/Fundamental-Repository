#include <iostream>
using namespace std;
main () {
	int N, find, index=0; //declare variable how many data, data you want to search, which index you find it
	bool gotcha = false;
	cin>>N; // many data
	
	int a[N];
	for (int i=0;i<N;i++) {
		cin>>a[i]; //input your data as 
	}
	cin>>find; //data where you want to search
	
	for (int i=0;i<N;i++) {
		if (a[i] == find) {
			gotcha = true; //if you find the data, gotcha will turn into true
			index = i; //i-th index where you find it
		} else {
			gotcha = false;//if you doesn't find the data, gotcha will turn into false
		}
		
	}
	
	if (gotcha) {
		cout<<"Data that you want to search is "<<find<<" and from index "<<index<<endl;
	} else {
		cout<<"Data that you want to search is "<<find<<" and it doesn't appear in your array"<<endl;
	}
}
