#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isomorphic(string s,string t)
    {
        unordered_map <char,char> rep;
        unordered_map <char,bool> used;
        for(int i=0;i<s.length();i++)
        {
             if(rep.count(s[i]))
             {
                if(rep[s[i]]!=t[i])
                    return false;
             }
             else
             {
                if(used[t[i]])
                    return false;
                rep[s[i]]=t[i];
                used[t[i]]=true;
             }
    }
    return true;
}
};
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    Solution obj;
    cout<<obj.isomorphic(s,t);
    return 0;
}