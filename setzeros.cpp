#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector <vector<int>> setzeros(vector<vector<int>> matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        std::vector <bool> rowszero(n,false);
        std::vector <bool> colszero(m,false);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    rowszero[i]=true;
                    colszero[j]=true;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(rowszero[i])
            {
                for(int j=0;j<m;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=0;j<m;j++)
        {
            if(colszero[j])
            {
                for(int i=0;i<n;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        return matrix;

    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    vector <vector<int>> matrix(n,vector <int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    Solution obj;
    vector <vector<int>> ans=obj.setzeros(matrix);
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