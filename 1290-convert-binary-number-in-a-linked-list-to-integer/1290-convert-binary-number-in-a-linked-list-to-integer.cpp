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
    int getDecimalValue(ListNode* head) {
    string s;
    ListNode* temp = head;
    while(temp!=NULL){
      s.push_back(temp->val +'0');
      temp = temp->next;
    }
    



// logic for conversion 
     int ans = 0;

     for(char c : s) {
      ans = (ans << 1) + (c - '0');
     }
     return ans;
    }
};