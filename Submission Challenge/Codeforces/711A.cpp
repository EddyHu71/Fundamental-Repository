#include <iostream>
using namespace std;

int main()
{
    int n;
    string s, str;
    int founded = 0;
    cin>>n;
    while (n--) {
        cin>>s;
        str+=s+'\n';
    }
    founded = str.find("OO");
    if (founded>= 0) {
        str.replace(founded, 2, "++");
        cout<<"YES\n"<<str;
    } else {
        cout<<"NO";
    }
    return 0;
}
