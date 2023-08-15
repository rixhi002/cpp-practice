#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void sortarray(vector <int>& arr,int n)
    {
        int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0) cnt0++;
            else if(arr[i]==1)cnt1++;
            else cnt2++;
        }
        for(int i=0;i<cnt0;i++) arr[i]=0;
        for(int i=cnt0;i<cnt1+cnt0;i++) arr[i]=1;
        for(int i=cnt0+cnt1;i<+cnt1+cnt0+cnt2;i++) arr[i]=2;
    }
};
int main()
{
    vector <int> arr;int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    Solution obj;
    obj.sortarray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}