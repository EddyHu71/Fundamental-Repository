#include<bits/stdc++.h>
using namespace std;

int getminimun(int a[], int n) {
	sort(a, a+n);
	return a[0];
}
int getminimun2(int a[], int n) {
	sort(a, a+n);
	return a[1];
}

int getmaximun(int a[], int n) {
	sort(a, a+n);
	return a[n];
}

main () {
	int n;
	cin>>n;
	int kasus = 1;
	int result = 0;
	int a, b, minimun = 0, maksimun = 0, index = 0;
	int temp1, temp2;
	while (n--) {

		cin>>a>>b;
		int arr[a];
		for (int i=0;i<a;i++) {
			cin>>arr[i];
//			temp1 = minimun;
//			temp2 = maximun;
//			minimun = min(minimun, arr[i]);
//			maximun = max(maximun, arr[i]);
			
		}
		int nilai1 = getminimun(arr, a -1);
		int nilai2 = getmaximun(arr, a -1);
		int nilai3 = getminimun2(arr, a -1);
		cout<<nilai1<<" "<<nilai2<<" "<<nilai3<<endl;
		int i = 1;
		if (nilai2 != nilai3) {
			while(i < a) {
				if (arr[i] == nilai1) {
					result+=arr[i];
					if (arr[i-1] != nilai3) {
						if (arr[i+1] == nilai3) {
							result+=arr[i+1];
							cout<<"Res dalam"<<result<<endl;
							break;
						}
					} else {
						if (arr[i-1] == nilai3) {
							result+=arr[i-1];
							cout<<"Res luar"<<result<<endl;
							break;
						}
					}
				}
				i++;
			}
		} else {
			result = nilai1;
		}
		cout<<"Case "<<kasus<<": "<<result<<endl;
		kasus++;
		nilai1=0, nilai2=0, nilai3=0, result = 0;
	}
}
