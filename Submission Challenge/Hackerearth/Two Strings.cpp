#include<bits/stdc++.h>
using namespace std;
main () {
    int N;
    cin>>N;
    string a, b;
    while (N--) {
        cin>>a>>b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
} 
