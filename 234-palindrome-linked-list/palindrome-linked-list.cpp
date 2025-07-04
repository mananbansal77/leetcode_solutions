/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode *reverse(ListNode*head)
{
    ListNode *temp=head;
    ListNode *atbt=head;
    ListNode *gr=NULL;
    while(temp!=NULL)
    {
        temp=temp->next;
        atbt->next=gr;
        gr=atbt;
        atbt=temp;
    }
    return gr;
}
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        ListNode* mid=NULL;
        mid=reverse(slow);
        while(mid!=NULL&&head!=NULL)
        {
            if(mid->val!=head->val)
            return false;
            mid=mid->next;
            head=head->next;
        }
        return true;
        
    }
};