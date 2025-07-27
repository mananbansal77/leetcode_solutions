class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
        map<char,int>mp;
        map<char,int>tp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            tp[t[i]]++;
        }
        for(auto it:mp)
        {
            if(mp[it.first]!=tp[it.first])
            return false;
        }
        return true;
        
    }
};