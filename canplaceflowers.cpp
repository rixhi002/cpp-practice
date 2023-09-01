#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool canplaceflowers(vector <int>& flowers,int n)
    {
        int cnt=0;
        int i=0;
        while(i<flowers.size())
        {
            if(flowers[i]==0)
            {
                if(i==0||flowers[i-1]==0)
                {
                    if(i==flowers.size()-1||flowers[i+1]==0)
                    {
                        flowers[i]=1;
                        cnt++;
                    }
                }
            }
            i++;
        }
    }
    return count>=n;
};
int main()
{
    int n,a,k;
    cin>>n>>k;
    vector <int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    Solution obj;
    bool ans=obj.canplaceflowers(arr,k);
    cout<<ans<<endl;
    return 0;
}