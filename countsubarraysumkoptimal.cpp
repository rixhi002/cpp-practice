#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int subarraysum(vector <int>& arr,int k)
    {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int prefixSum=0,cnt=0;
        for(int i=0;i<arr.size();i++)
        {
            prefixSum+=arr[i];
            int remove =prefixSum-k;
            cnt+=mpp[remove];
            mpp[prefixSum]+=1;
        }
        return cnt;
    }
};
int main()
{
    int n,k,a;
    cin>>n>>k;
    vector <int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    Solution obj;
    int ans=obj.subarraysum(arr,k);
    cout<<ans;
    return 0;
}