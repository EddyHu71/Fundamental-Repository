// C++ program to find LCM of two numbers  
#include <iostream>  
using namespace std; 
// Recursive function to return gcd of a and b  
class gfg 
{ 
 public : int gcd(int a, int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
  
   
// Function to return LCM of two numbers  
  int lcm(int a, int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
} ; 
// Driver program to test above function  
int main()  
{  
    gfg g; 
    int a, b;
    cin>>a>>b;
    if (a + 1 == b) {
    	cout<<a*b<<endl;
	} else if (b + 1 == a) {
		cout<<a*b<<endl;
	}else {
		cout<<g.lcm(a, b);
	}
    return 0;
}  
