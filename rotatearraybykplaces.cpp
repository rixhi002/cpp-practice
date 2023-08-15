#include <bits/stdc++.h>
using namespace std;
void rotate(vector <int>& arr,int n,int k)
{
    if(n==0)
        return;
    k=k%n;
    if(k>n)
        return;
    int temp[k];
    for(int i=n-k;i<n;i++)
    {
        temp[i-n+k]=arr[i];
    }
    for(int i=n-k-1;i>=0;i--)
    {
        arr[i+k]=arr[i];
    }
    for(int i=0;i<k;i++)
    {
        arr[i]=temp[i];
    }
}
int main()
{
    int a,n,k;
    vector <int> arr;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    rotate(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}