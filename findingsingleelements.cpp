#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
int getSingleelement(vector <int>& arr )
{
    int n=arr.size();
    int xxor=0;
    for(int i=0;i<n;i++)
    {
        xxor=xxor^arr[i];
    }
    return xxor;
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
    int ans=obj.getSingleelement(arr);
    cout<<ans<<endl;
    return 0;
}