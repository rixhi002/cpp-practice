#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxpower(string s)
    {
        if(s.empty())
        {
            return 0;
        }
        int maxpower=1;
        int currpower=1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                currpower++;
                maxpower=max(maxpower,currpower);
            }
            else
            {
                currpower=1;
            }
        }
        return maxpower;
    }
};
int main()
{
    string s;
    getline(cin,s);
    Solution obj;
    int ans=obj.maxpower(s);
    cout<<ans;
    return 0;
}