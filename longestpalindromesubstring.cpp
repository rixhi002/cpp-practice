#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string longestpalindrome(string s)
    {
        int start=0,maxlength=1;
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            int left=i,right=i;
            while(left>=0 && right < n && s[left]==s[right])
            {
                left--;
                right++;
            }
            int len=right -left - 1;
            if(len > maxlength)
            {
                start=left+1;
                maxlength=len;
            }
            left=i;
            right=i+1;
            while(left>=0 && right < n && s[left]==s[right])
            {
                left--;
                right++;
            }
            len=right -left - 1;
            if(len > maxlength)
            {
                start=left+1;
                maxlength=len;
            }
        }
        return s.substr(start,maxlength);
    }
};
int main()
{
    string s;
    getline(cin,s);
    Solution obj;
    cout<<obj.longestpalindrome(s);
    return 0;
}