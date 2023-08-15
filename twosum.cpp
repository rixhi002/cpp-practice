#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
vector <int> twosum(vector <int>& nums,int target)
{
    vector <int> arr;
    int len=nums.size();
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                arr.push_back(i);
                arr.push_back(j);
                return arr;
            }
        }
    }
    return arr;
}
};
int main()
{
int n,t,a;
cin>>n;
vector <int> nums;
cin>>t;
for(int i=0;i<n;i++)
{
    cin>>a;
    nums.push_back(a);
}
Solution obj;
vector <int> arr= obj.twosum(nums,t);
int len=arr.size();
for(int i=0;i<len;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}