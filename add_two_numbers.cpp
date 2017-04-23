#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility> 
#include <map>
using namespace std;
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	ListNode preHead(0);
    	ListNode *cur = &preHead;
    	ListNode *p = l1, *q= l2, *next = NULL;
    	int plus = 0;
    	int sum  = 0;
    	while (p || q || plus)
    	{	
    		sum  = (p ? p->val : 0) + (q ? q->val : 0) + plus;
    		next  = new ListNode(sum % 10);
    		plus = sum / 10;
    		cur->next = next;
    		cur = cur->next;
    		p = p ? p->next : NULL;
    		q = q ? q->next : NULL; 
    	}
    	return preHead.next;
    }
};

int main(int argc, char const *argv[])
{

	return 0;
}