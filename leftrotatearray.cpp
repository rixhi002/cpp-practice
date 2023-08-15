#include <bits/stdc++.h>
using namespace std;
void leftrotate(vector <int>& arr,int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.emplace_back(a);
    }
    leftrotate(arr,n);
}