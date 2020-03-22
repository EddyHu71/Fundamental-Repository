#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

main () {
    int T, a, budg, kasus = 0, result = 0, hitung = 0;

    cin>>T;
    while (T--) {
        kasus++;
        cin>>a>>budg;
        int arrs[a];
        for (int i=0;i<a;i++) {
            cin>>arrs[i];
        }
        sort(arrs, arrs+a);
    for (int i=0;i<a;i++) {
    	if ((result+arrs[i] <= budg)) {
    		result+=arrs[i];
    		hitung++;
		}
	}
    cout<<"Case #"<<kasus<<": "<<hitung<<endl;
    	hitung = 0;
    	result= 0;
    }
}
