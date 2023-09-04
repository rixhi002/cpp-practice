#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool check(string s1,string s2)
    {
        if(s1.length()!=s2.length())
            return false;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }
};
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    Solution obj;
    cout<<obj.check(s,t);
    return 0;
}