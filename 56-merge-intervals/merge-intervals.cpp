class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) { return a[0] < b[0]; });

        vector<vector<int>>v;
        int b=intervals[0][0];
        int e=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=e)
            {
                  e=max(e,intervals[i][1]);

            }
            else
            {
                vector<int>r;
                r.push_back(b);
                r.push_back(e);
                b=intervals[i][0];
                e=max(e,intervals[i][1]);
                v.push_back(r);
            }
            

        }vector<int>r;
         r.push_back(b);
                r.push_back(e);
                v.push_back(r);
        return v;
        
    }
};