#include <bits/stdc++.h>
using namespace std;
int missingnumbers(vector <int>& a,int n)
{
    int sum=(n*(n+1))/2;
    int s2=0;
    for(int i=0;i<n-1;i++)
    {
        s2+=a[i];
    }
    int missingnum=sum-s2;
    return missingnum;
}
int main()
{
    int n,a;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n-1;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    int ans= missingnumbers(arr,n);
    cout<<abs(ans);
    return 0;
}