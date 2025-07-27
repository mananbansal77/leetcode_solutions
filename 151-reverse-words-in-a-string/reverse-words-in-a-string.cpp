#include<stack>
#include <bits/stdc++.h>
class Solution {
public:
stack<string>a;
int u=-1;
    string reverseWords(string s) {
        s=s+" ";
        string t="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(t!="")
                {
                a.push(t);
                t="";
                u++;
                }
            }
            else
            t+=s[i];
        }
        string y="";
        while(u>=0)
        {
            y=y+a.top();
            a.pop();
            
            if(u!=0)
            y=y+" ";
            u--;

        }
        return y;
     
        
        
    }
};