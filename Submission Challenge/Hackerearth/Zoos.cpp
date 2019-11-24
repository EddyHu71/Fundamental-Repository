#include <iostream>
using namespace std;
main () {
    string a;
    int tambah = 0, tambah1= 0;
    cin>>a;
    for (int i=0;i<a.length();i++) {
        if (a[i] == 'z') {
            tambah++;
        } else if (a[i] == 'o') {
            tambah1++;
        }
    }
    if (tambah * 2 == tambah1) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}
