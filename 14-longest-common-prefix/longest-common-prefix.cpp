class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a=strs[0];
        int i=0;
        string h="";
        string b=strs[strs.size()-1];
        while(i<a.size()&&i<b.size())
        {
            if(a[i]==b[i])
            {
                h+=a[i];
                i++;
            }
            else
            break;
        }
        return h;
        
    }
};