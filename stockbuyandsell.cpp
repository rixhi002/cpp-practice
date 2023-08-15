#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector <int> &arr)
{
    int maxP=0;
    int n=arr.size();
    int minP=INT_MAX;
    for(int i=0;i<n;i++)
    {
        minP=min(minP,arr[i]);
        maxP=max(maxP,arr[i]-minP);
            
        
    }
    return maxP;
}
int main()
{
    int n,a;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    int max=maxProfit(arr);
    cout<<max;
    return 0;
}