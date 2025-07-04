/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0;
        int l2=0;
        ListNode *a=headA;
        ListNode *b=headB;
        while(a!=NULL)
{
    l1++;
    a=a->next;

}        
while(b!=NULL)
{
    l2++;
    b=b->next;
}
ListNode *c=NULL;
ListNode *d=NULL;
if(l1>l2)
{
    c=headA;
    d=headB;

}
else
{
c=headB;
d=headA;
}
int n=abs(l1-l2);
while(n>0)
{
    c=c->next;
    n--;
}
while(c!=NULL&&d!=NULL)
{
    if(c==d)
    {
        return c;
    }
    c=c->next;
    d=d->next;

}
return NULL;
    }
};