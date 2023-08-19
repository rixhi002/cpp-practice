#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector <vector<int>> rotate(vector <vector<int>>& matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector <vector<int>> rotated(n, vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                rotated[n-i-1][j]=matrix[i][j];
            }
        }
        return rotated;
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    vector <vector<int>> matrix(n,vector <int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    Solution obj;
    vector <vector<int>> ans=obj.rotate(matrix);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}