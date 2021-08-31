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
class Solution
{
public:
    void insertAtTail(ListNode *head, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        ListNode *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        return;
    }

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;

        ListNode *ans;
        if (temp1 == NULL)
        {
            return temp2;
        }
        if (temp2 == NULL)
        {
            return temp1;
        }

        if (temp1->val < temp2->val)
        {
            ListNode *x = new ListNode(temp1->val);
            ans = x;
            temp1 = temp1->next;
        }
        else
        {
            ListNode *x = new ListNode(temp2->val);
            ans = x;
            temp2 = temp2->next;
        }

        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1->val < temp2->val)
            {
                insertAtTail(ans, temp1->val);
                temp1 = temp1->next;
            }
            else
            {
                insertAtTail(ans, temp2->val);
                temp2 = temp2->next;
            }
        }

        if (temp1 != NULL)
        {
            while (temp1 != NULL)
            {
                insertAtTail(ans, temp1->val);
                temp1 = temp1->next;
            }
        }

        if (temp2 != NULL)
        {
            while (temp2 != NULL)
            {
                insertAtTail(ans, temp2->val);
                temp2 = temp2->next;
            }
        }

        return ans;
    }
};
