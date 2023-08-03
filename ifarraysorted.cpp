#include <bits/stdc++.h>
using namespace std;
bool issorted(vector <int>& arr,int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}
int main()
{
    vector <int> arr;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    if(issorted(arr,n)==true)
    {
        cout<<"Array is sorted";

    }
    else
    {
        cout<<"Array is not sorted";
    }
}