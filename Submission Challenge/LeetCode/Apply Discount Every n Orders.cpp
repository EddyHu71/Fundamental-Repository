#include<bits/stdc++.h>
using namespace std;

class Cashier {
    int _n,_discount,cnt;
    map<int,int> mp;
public:
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) {
        _n=n;
        _discount=discount;
        mp.clear();
        for (int i=0;i<(int)products.size();++i){
            mp[products[i]]=prices[i];
        }
        cnt=0;
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        cnt++;
        double ans=0;
        for (int i=0;i<(int)product.size();++i) ans+=1.0*mp[product[i]]*amount[i];
        if (cnt==_n){
            cnt=0;
            ans=ans-(_discount*ans)/100;
        }
        return ans;
    }
};
