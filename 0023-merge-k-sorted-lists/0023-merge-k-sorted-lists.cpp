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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         if(lists.size() == 0)return nullptr;
        priority_queue<int>pq;
        for(ListNode* head : lists)
        {
            while(head != nullptr)
            {
                pq.push(head -> val);
                head = head -> next;
            }
        }
        ListNode* ans = new ListNode();;
        ans -> next = nullptr;
        while(!pq.empty())
        {
            ListNode* t = new ListNode(pq.top());
            t -> next = ans -> next;
            ans -> next = t;
            pq.pop();
        }
        return ans -> next;
    }
};