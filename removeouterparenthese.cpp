#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string removeouterparenthesis(string s)
    {
        string result;
        int cnt=0;
        for(auto c:s)
        {
            if(c=='('&&cnt==0)
            {
                cnt--;
            }
            else if(c==')'&&cnt==-1)
            {
                cnt++;
            }
            else{
                result.push_back(c);
                if(c=='(') cnt--;
                else cnt++;
            }
        }
        return result;
    }
};
int main()
{
    string s;
    getline(cin,s);
    Solution obj;
    cout<<obj.removeouterparenthesis(s);
    return 0;
}