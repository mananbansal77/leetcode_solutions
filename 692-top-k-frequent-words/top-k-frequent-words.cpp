class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>v;
        map<string,int>mp;
        for(auto it:words)
        {
            mp[it]++;
        }
        // priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
        auto cmp = [](const pair<int, string>& a, const pair<int, string>& b) {
            if (a.first == b.first)
                return a.second < b.second; 
            return a.first > b.first;      
        };

        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(cmp)> pq(cmp);
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
            if(pq.size()>k)
            {
                pq.pop();
            }

        }
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
         reverse(v.begin(),v.end());
         return v;

        
    }
};