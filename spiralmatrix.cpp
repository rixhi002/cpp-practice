#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector <int> spiral(vector <vector<int>>& matrix)
    {
        int n=matrix.size();
        vector <int> ans;
        int top=0,left=0,right=n-1,bottom=n-1;
        while(top<=bottom&&left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom)
            {
            for(int i=right;i>=left;i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left<=right)
            {
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
            
        }
        return ans;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    Solution obj;
    vector <int> ans=obj.spiral(matrix);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
