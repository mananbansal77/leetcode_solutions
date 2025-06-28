class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=1;i<=numRows;i++)
        {
            vector<int>r;
            int y=1;
            r.push_back(1);
            for(int j=1;j<i;j++)
            {
                y=y*(i-j);
                y=y/j;
            r.push_back(y);    

            }
            v.push_back(r);

        }
        return v;

        
    }
};