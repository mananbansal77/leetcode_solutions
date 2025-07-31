class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>lastind(3,-1);
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            lastind[s[i]-'a']=i;
            if(lastind[0]!=-1&&lastind[1]!=-1&&lastind[2]!=-1)
            {
                cnt+=1+min(lastind[0],min(lastind[1],lastind[2]));

            }
            
        }
        return cnt;
        
    }
};