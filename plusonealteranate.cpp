#include <bits/stdc++.h>
using namespace std;
vector <int> plusone(vector <int>& digits,int n)
{
    int d=0;vector <int> ans;
    for(int i=0;i<n;i++)
    {
        d=d*10+digits[i];
    }
    d+=1;
    while(d>0)
    {
        int a=d%10;
        ans.push_back(a);
        d=d/10;
    }
    std::reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    int n,a;
    vector <int> digits;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        digits.push_back(a);
    }
    vector <int> ans=plusone(digits,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}