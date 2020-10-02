#include <iostream>
using namespace std;
main () {
  int a = 0, indeks = 0;
  for (int i=1;i<=5;i++) {
  	cin>>a;
  	if (a == 0) {
  		indeks = i;
	  }
  }
  cout<<indeks<<endl;
}
