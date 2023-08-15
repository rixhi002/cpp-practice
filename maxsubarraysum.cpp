#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maximumsubarray(vector <int>& arr,int n)
    {
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            maxi=max(maxi,sum);
        }
    }
    return maxi;
    }
};
int main()
{
    int n,a;
    cin>>n;
    vector  <int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    Solution obj;
    int max=obj.maximumsubarray(arr,n);
    cout<<max;
    return 0;
}