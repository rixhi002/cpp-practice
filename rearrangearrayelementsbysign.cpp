#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector <int> rearrange(vector <int>& arr)
    {
    int n=arr.size();
    vector <int> pos;
    vector <int> neg;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }
    for(int i=0;i<n/2;i++)
    {
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    return arr;
    }
};
int main()
{
    int n;
    cin>>n;
    vector <int> arr;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    Solution obj;
    vector <int> ans=obj.rearrange(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}
