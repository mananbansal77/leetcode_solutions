class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      int n= matrix.size();
      int m=matrix[0].size();
        vector<int>row(n+1,0);
        vector<int>col(m+1,0);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }

        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(row[i]==1||col[j]==1)
                {
                    matrix[i][j]=0;
                }
            }

        }
    }
};
