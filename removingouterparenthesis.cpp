#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string removeouterparenthesis(string s){
        string result ="";
        stack<char> parenstack;
        for(char c:s)
        {
            if(c=='(')
            {
                if(!parenstack.empty())
                {
                    result+=c;
                }
                parenstack.push(c);
            }else if(c==')')
            {
                if(parenstack.size()>1)
                {    result+=c;}
                parenstack.pop();
            }
        }
        return result;
    }
};
int main()
{
    string input;
    getline(cin,input);
    Solution obj;
    string output=obj.removeouterparenthesis(input);
    cout<<output<<endl;
    return 0;
}