class Solution {
public:
    string frequencySort(string s) {
        map<char,int>freq;
        for(char c:s)
        {
            freq[c]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:freq)
        {
            pq.push({it.second,it.first});

        }
        string h="";
        while(!pq.empty())
        {
            auto r=pq.top();
            pq.pop();
             h += string(r.first, r.second);
        }
        return h;

       
        
    }
};