#include <bits/stdc++.h>
using namespace std;
vector <int> Findunion(int arr1[],int arr2[],int n,int m)
{
    set <int> s;
    vector<int> Union;
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(arr2[i]);
    }
    for(auto & it:s)
    {
        Union.push_back(it);
    }
    return Union;
}
int main()
{   
    
    int n,m;
    cin>>n;
    cin>>m;
    int a1[n];int a2[m];
    for(int i=0;i<n;i++)
    {
        cin>>a1[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cin>>a2[i];
    }
    vector <int>ans=Findunion(a1,a2,n,m);
    for(auto & val:ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
