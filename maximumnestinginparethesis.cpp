#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int maxdepth(string s)
    {
        int max_depth=0;
        int curr_depth=0;
        for(char c:s)
        {
            if(c=='(')
            {
                curr_depth++;
                max_depth=max(max_depth,curr_depth);
            }
            else if(c==')')
            {
                curr_depth--;
            }
        }
        return max_depth;
    }
};
int main()
{
    string s;
    getline(cin,s);
    Solution obj;
    cout<<obj.maxdepth(s);
    return 0;
}