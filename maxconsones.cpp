#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int findMaxConsecutiveOnes(vector <int>& nums)
    {
        int cnt=0;
        int max=0;
        for(int i=0 ; i <nums.size();i++)
        {
            if(nums[i]==1)
            {
                cnt++;
            }
            else{
                cnt=0;
            }
            if(max<cnt)
            max=cnt;
        }
        return max;
    }
};
int main()
{
    vector <int> ans;
    int a,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ans.push_back(a);
    }
    Solution obj;
    int max= obj.findMaxConsecutiveOnes(ans);
    cout<<max<<endl;
    return 0;
}
