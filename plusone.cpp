#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector <int> plusone(vector <int>& digits)
    {
        int carry=1;
        vector <int> ans;
        for(int i=0;i<digits.size();i++)
        {
            int total=digits[i]+carry;
            ans.push_back(total%10);
            carry=total/10;
        }
        if(carry)
            ans.push_back(carry);
        
        std::reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
    int n,a;
    cin>>n;
    vector <int> d;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        d.push_back(a);
    }
    std::reverse(d.begin(),d.end());
    Solution obj;
    vector <int> ans=obj.plusone(d);
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}