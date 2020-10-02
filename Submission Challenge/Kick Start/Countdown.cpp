#include <iostream>
using namespace std;
main () {
    int N, T, K, hitung = 0, cases = 0, counted = 0;
    cin>>T;
    while (T--) {
        cin>>N>>K;
        int a[N], tandai = 0;
        for (int i=0;i<N;i++) {
            cin>>a[i];
            if (a[i] == K) {
            	tandai = K;
			}
        }
        for (int i=1;i<N;i++) {
            if (a[i] < a[i-1]) {
                hitung++;
            } else {
            	if (hitung == K) {
                	cases++;
            	} else if (hitung >= K && tandai == K) {
            		cases++;
				}
                hitung = 0;
            }
        }
        if (hitung == K) {
        	cases++;
    	} else if (hitung >= K && tandai == K) {
            cases++;
		}
        counted++;
        cout<<"Case #"<<counted<<": "<<cases<<endl;
        cases = 0, hitung = 0, tandai = 0;
    }
}
