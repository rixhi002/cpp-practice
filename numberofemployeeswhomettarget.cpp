#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int employee(vector<int>& hours,int target)
    {   
        int cnt=0;
        int n=hours.size();
        for(int i=0;i<n;i++)
        {
            if(hours[i]>=target)
                cnt++;
        }
        return cnt;
    }
};
int main()
{
    int n,a;
    cin>>n;
    vector <int> hours;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        hours.push_back(a);
    }
    int target;
    cin>>target;
    Solution obj;
    int ans=obj.employee(hours,target);
    cout<<"The number of employees met the target:"<<ans<<endl;
    return 0;
}