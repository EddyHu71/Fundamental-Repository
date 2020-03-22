#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = str.length() - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            return false;
        } 
    } 
    return true;
} 
main () {
	string s, kondisi= "No";
	cin>>s;
	int cek1 = ((s.length() - 1)/ 2) - 1;
	int cek2 = ((s.length() + 3) / 2)- 1;
	//cout<<cek1<<" "<<cek2<<endl;
	int i =0;
	if (isPalindrome(s)) {
		while (i <= cek1 && cek2 < s.length()) {
			if (s[i] != s[cek2]) {
				kondisi = "No";
			} else {
				kondisi = "Yes";
			}
			i++;
			cek2++;
			//cout<<i<<" "<<cek2;
		}
	}
	cout<<kondisi<<endl;
}
