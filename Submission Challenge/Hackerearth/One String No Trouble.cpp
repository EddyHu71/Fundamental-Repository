#include<bits/stdc++.h>
using namespace std;
main () {
    string s;
    getline(cin, s);
    long long hitung = 0, temp = 0;
    for (long long i=0;i<s.length();i++) {
        if (s[i] != s[i+1]) {
            hitung++;
        } else {
            hitung++;
            temp = max(hitung, temp);
            hitung = 0;
        }
    }
    cout<<max(hitung, temp)<<endl;
}

