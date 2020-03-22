#include <bits/stdc++.h> 
#include <iomanip>
#include <math.h>
using namespace std; 

int main() 
{ 
    double s, x;
	double res = 0;
    cin>>s;
    x = s / 3.0000000000000000000000000;
    res = x * x * x;
    cout <<fixed<<setprecision(10)<<res<<endl;
    return 0; 
} 
