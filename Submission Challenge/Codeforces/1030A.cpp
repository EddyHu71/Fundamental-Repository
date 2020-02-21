// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, a;
    string difficult = "EASY";
    cin>>T;
    while (T--) {
        cin>>a;
        if (a == 1) {
            difficult = "HARD";
        }
    }
    cout<<difficult<<endl;
  return 0;
}
