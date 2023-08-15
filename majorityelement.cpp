#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int majorityelement(vector <int>& nums)
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int c;
            for(int j=0;j<n;j++)
            {
                if(nums[j]==nums[i])
                    c++;
            }
            if(c>(n/2))
                return nums[i];
        }
        return -1;
    }
};
int main()
{
    int len,a;
    cin>>len;
    vector <int> num;
    for(int i=0;i<len;i++)
    {
        cin>>a;
        num.push_back(a);
    }
    Solution obj;
    int n=obj.majorityelement(num);
    cout<<n;
    return 0;

}