#include <bits/stdc++.h>
using namespace std;
vector<int> movezeros(int n,vector <int> a)
{
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1)
        return a;
    for(int i=j+1;i<n;i++)
    {
        if(a[i]!=0)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    return a;
}
int main(){
    vector <int> arr;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    vector <int> ans=movezeros(n,arr);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}