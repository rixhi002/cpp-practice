#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector <int> merge(vector <int>& nums1,int m,vector <int>& nums2,int n)
    {   
        int i=0;int j=0;
        vector <int> ans;
        while(i<m&&j<n)
        {
            if(nums1[i]<nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m)
        {
            ans.push_back(nums1[i]);
            i++;
            
        }
        while(j<n)
        {
            ans.push_back(nums2[j]);
            j++;
            
        }
        return ans;
    }
};
int main()
{
    int n,m,a;
    cin>>m>>n;
    vector<int> a1,a2;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        a1.push_back(a);
    }
     for(int i=0;i<n;i++)
    {
        cin>>a;
        a2.push_back(a);
    }
    Solution obj;
    vector <int> ans=obj.merge(a1,m,a2,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}