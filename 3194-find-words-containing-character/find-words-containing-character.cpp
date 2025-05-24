class Solution {
public:
int func(string s,char c)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c)
        return 1;
    }
    return 0;
}
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        for(int i=0;i<words.size();i++)
        {
           if(func(words[i],x))
           {
            v.push_back(i);
           }

        }
        return v;
        
    }
};