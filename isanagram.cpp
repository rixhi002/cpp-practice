#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isanagram(string s,string k)
    {
        if(s.length()!=k.length())
        {
            return false;
        }
    sort(s.begin(),s.end());
    sort(k.begin(),k.end());
    return s==k;
    }
};
int main()
{
    string s,k;
    getline(cin,s);
    getline(cin,k);
    Solution obj;
    cout<<obj.isanagram(s,k);
    return 0;
}