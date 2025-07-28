class Solution {
public:
    string longestPalindrome(string s) {
         int n = s.length();
        if (n == 0) return "";
        int strt=0;
        int maxi=0;
        // int length=0;
        for(int i=0;i<s.size();i++)
        {
            int l=i;
            int r=i;
            while(l>=0&&r<s.size()&&s[l]==s[r])
            {
                l--;
                r++;
            }
            int length=r-l-1;
            if(length>maxi)
            {
                maxi=length;
                strt=l+1;
            }
             l=i;
             r=i+1;
            while(l>=0&&r<s.size()&&s[l]==s[r])
            {
                l--;
                r++;
            }
             length=r-l-1;
            if(length>maxi)
            {
                maxi=length;
                strt=l+1;
            }
        }
        return s.substr(strt,maxi);


        
        
    }
};