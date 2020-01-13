#include <iostream>
using namespace std;
int main () {
    int n, hitung=0, lembah=0;
    string s;
    cin>>n;
    cin>>s;
    for (int i=0;i<n;i++) {
        if (s[i] == 'U') {
            if (++hitung == 0) {
                lembah++;
            }
        } else {
            hitung--;
        }
        
    }
    cout<<lembah<<endl;
    return 0;
}
