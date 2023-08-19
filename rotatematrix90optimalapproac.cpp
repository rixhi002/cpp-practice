#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector <vector<int>> rotate(vector <vector<int>>& matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return matrix;
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector <int> (m,0));
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
