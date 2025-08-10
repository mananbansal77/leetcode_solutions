/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
        return v;
         map<int, map<int, multiset<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto it=q.front();
            TreeNode *w=it.first;
            int a=it.second.first;
            int b=it.second.second;
            q.pop();
           mp[a][b].insert(w->val);
            if(w->left)
            {
                q.push({w->left,{a-1,b+1}});
            }
            if(w->right)
            {
                q.push({w->right,{a+1,b+1}});
            }

        }
       for(auto &p : mp) { 
            vector<int> ans;
            for(auto &q : p.second) { 
                ans.insert(ans.end(), q.second.begin(), q.second.end());
            }
            v.push_back(ans);
        }

        return v;
        
    }
};