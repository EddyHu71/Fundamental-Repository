#include <iostream>
using namespace std;

int main() {
    
    int N = 0;
    string ans = "No";
    cin>>N;
    long data[N];
    for(auto i=0; i<N; i++)
        {
            cin>>data[i];
        }
    if (data[N - 1] % 10 != 0) {
        ans = "No";
    } else {
        ans = "Yes";
    }
    
    cout<<ans;
    
    return 0;
}
