#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int subarraysum(vector <int> arr,int k)
    {
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                if(sum==k)
                cnt++;
            }
            
        }
        return cnt;
    }
};
int main()
{
    int n,k;
    cin>>n>>k;
    int a;
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