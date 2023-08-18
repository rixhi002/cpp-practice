#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool containsduplicates(vector <int>& nums)
    {
        unordered_set <int> seenNumbers;
        for(int num:nums)
        {
            if(seenNumbers.count(num)>0)
            {
                return true;
            }
            seenNumbers.insert(num);
        }
        return false;
    }
};
int main()
{
    int n,a;
    cin>>n;
    vector <int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    Solution obj;
    
    if(obj.containsduplicates(nums)==true)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
    return 0;
}