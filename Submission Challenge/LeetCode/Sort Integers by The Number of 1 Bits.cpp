#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compares);
        
        return arr;
    }
    
    bool static compares(int num1, int num2) {
        int getBit1 = findBits(num1);
        int getBit2 = findBits(num2);
        if (getBit1 == getBit2) {
            return num1 < num2;
        }
        return getBit1 < getBit2;
    }
    int static findBits(int a) {
        int binary = 0;
        while (a) {
            if (a % 2 == 1) {
                binary++;
            }
            a/=2;
         }
        return binary;
    }
};

int main () {
	vector<int> arr = {0,1,2,3,4,5,6,7,8};
	Solution s;
	cout<<s.sortByBits(arr);
	return 0;
}
