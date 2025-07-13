/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
unordered_map<Node*, Node*> v;
    Node* cloneGraph(Node* node) {
        if(node==NULL)
        return NULL;
        if(v.find(node)!=v.end())
        return v[node];
        Node *clone=new Node(node->val);
        v[node]=clone;
        for(Node *n:node->neighbors)
        {
            clone->neighbors.push_back(cloneGraph(n));
        }
        return clone;

        
    }
};