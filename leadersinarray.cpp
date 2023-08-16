#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector <int> leadersinarray(vector <int>& arr)
    {   vector <int> ans;
        int n=arr.size();
        int max=arr[n-1];
        ans.push_back(arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>max)
            {
              ans.push_back(arr[i]);
              max=arr[i];  
            }
        }
        return ans;
    }
};
int main()
{
    int n;
    cin>>n;
    int a;
    vector <int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
}
    Solution obj;
    vector <int> ans=obj.leadersinarray(arr);
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}