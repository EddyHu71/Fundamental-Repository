#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,k,m,tmp1;
    string tmp2;
    cin>>n>>m;
    int sum1=0,sum2=0;
    vector<int> v(n,0);
    for(int i=0;i<m;i++)
    {
        cin>>tmp1>>tmp2;
        if(v[tmp1-1]!=-1)
        {
            if(tmp2=="AC")
            {
                sum1=sum1+1;
                sum2=sum2+v[tmp1-1];
                v[tmp1-1]=-1;
            }
            else
            {
                v[tmp1-1]++;
 
            }
        }
    }
    cout<<sum1<<" "<<sum2;
     return 0;
}
