#include <iostream>
using namespace std;
main () {
    string s;
    int point1 = 0, point2= 0;
    cin>>s;
    for (int i=0;i<s.length();i++) {
        if (s[i] == 'L')
        {
            point1--;
        } else if (s[i] == 'R') {
            point1++;
        } else if (s[i] == 'D') {
            point2--;
        } else if (s[i] == 'U') {
            point2++;
        }
    }
    
    cout<<point1<<" "<<point2<<endl;
}

