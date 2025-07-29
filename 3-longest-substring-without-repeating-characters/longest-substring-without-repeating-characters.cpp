class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256,-1);
        int left=0;
        // int right=0;
        int maxi=0;
        for(int right=0;right<s.size();right++)
        {
            if(v[s[right]]>=left)
            {
                left=v[s[right]]+1;
            }
            
                v[s[right]]=right;
                maxi=max(maxi,right-left+1);
            

        }
        return maxi;


        
    }
};