class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        // return num;
        
        string a=s;
        string b=s;
        int w=0;
        int r=0;
        for(int i=0;i<s.size();i++)
        {
            
            while(s[w]=='1'||s[w]=='0')
            w++;
            char c=s[w];
            

                
            
            if(a[i]==c)
            {
                if(w>0)
                a[i]='0';
                else
                a[i]='1';
            }
        }
        // string a=s;
        for(int i=0;i<s.size();i++)
        {
             while(s[r]=='9')
            r++;
            char c=s[r];
            
            if(b[i]==c)
            {
                b[i]='9';
            }
        }
        int e=stoi(a);
        int d=stoi(b);
        return abs(e-d);

        
    }
};