#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool linearsearch(vector <int>& a,int num)
    {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]==num)
                return true;
        }
        return false;
    }
    int longestsuccessiveelements(vector <int>& a)
    {
        int n=a.size();
        int longest=1;
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            int cnt=1;
            while(linearsearch(a,x+1)==true)
            {
                x+=1;
                cnt+=1;
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};
int main()
{
    vector <int> arr;
    int n;
    cin>>n;
    int a;
     for(int i=0;i<n;i++)
     {
        cin>>a;
        arr.push_back(a);
     }
     Solution obj;
     int ans=obj.longestsuccessiveelements(arr);
     cout<<ans;
     return 0;
}