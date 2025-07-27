class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        map<char,char>sp;
        if(s.size()!=t.size())
        return false;
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(mp[s[i]]&&mp[s[i]]!=t[i]||sp[t[i]]&&sp[t[i]]!=s[i])
                return false;
                mp[s[i]]=t[i];
                sp[t[i]]=s[i];
            }

        }
        return true;
        
    }
};